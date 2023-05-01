#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
// #define sz(x) int((x).size())
#define debug(x) cerr<<#x<<": "<<(x)<<"\n"
#define pb push_back

const int mxn = 1e5+1;
int id[mxn+1] = {};
int sz[mxn+1] = {};

int find(int x){
  int root = x;
  while(root != id[root]) root = id[root];

  while(x != root){
    int next = id[x];
    id[x] = root;
    x = next;
  }
  
  return root;
}

void unite(int a, int b){
  a = find(a);
  b = find(b);
  if(a == b) return;
  if(sz[a] < sz[b]) swap(a, b);
  sz[a] += sz[b];
  id[b] = a;
}

void f(){
  int n, m, k;
  cin>>n>>m>>k;

  for(int i = 1;i<=n;i++){
    id[i] = i;
    sz[i] = 1;
  }

  vector<int> f[n+1];

  int a, b;
  while(m--){
    cin>>a>>b;
    f[a].pb(b);
    f[b].pb(a);
  }

  while(k--){
    cin>>a>>b;
    unite(a, b);
  }

  int q; cin>>q;
  char op;
  while(q--){
    cin>>op;
    if(op == 'F'){
      cin>>a>>b;
      f[a].pb(b);
      f[b].pb(a);
    }
    else if(op == 'T'){
      cin>>a>>b;
      unite(a, b);
    }
    else{
      cin>>a;
      int cur = find(a);
      int res = 0;
      for(auto x:f[a])
        if(cur == find(x)) res++;
      cout<<res<<"\n";
    }
  }
}

int main(){
  ios_base::sync_with_stdio(0); cin.tie(0);
  int t = 1;
  // cin>>t;
  while(t--) f();
  return 0;
}