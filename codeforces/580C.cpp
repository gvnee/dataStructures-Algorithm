#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define sz(x) int((x).size())
#define pb push_back

const int mxn = 1e5+10;
int n, m, res = 0;
vector<bool> c(mxn, 0);
vector<int> a[mxn];

void dfs(int i, int p, int cats){
  if(c[i]) cats++;
  else cats = 0;
  if(cats>m) return;

  if(sz(a[i]) == 1 && i != 1){
    res++;
    return;
  }
  
  for(int u:a[i])
    if(u != p)
      dfs(u, i, cats);
}

void f(){
  cin>>n>>m;
  int t;
  for(int i = 1;i<=n;i++){
    cin>>t;
    if(t) c[i] = 1;
  }

  int x, y;
  for(int i = 1;i<n;i++){
    cin>>x>>y;
    a[x].pb(y);
    a[y].pb(x);
  }

  dfs(1, 0, 0);
  cout<<res<<"\n";
}

int main(){
  cin.tie(0); ios_base::sync_with_stdio(0);
  int t = 1;
  // cin>>t;
  while(t--) f();
  return 0;
}