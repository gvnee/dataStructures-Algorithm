#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define sz(x) int((x).size())
#define pb push_back

const int mxn = 1e5;
vector<int> a[mxn];

void dfs(int i){
  for(int u:a[i]){
    if(a[u].empty()) 
    cout<<u<<"\n";
    dfs(u);
  }
}

void f(){
  int n;
  cin>>n;
  int x, y;
  for(int i = 1;i<n;i++){
    cin>>x>>y;
    a[x].pb(y);
  }

  dfs(1);

  // for(int i = 1;i<=n;i++){
  //   cout<<i<<": ";
  //   for(int u:a[i]) cout<<u<<" ";
  //   cout<<"\n";
  // }
  
}

int main(){
  cin.tie(0); ios_base::sync_with_stdio(0);
  int t = 1;
  // cin>>t;
  while(t--) f();
  return 0;
}