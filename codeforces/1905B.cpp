#include<bits/stdc++.h>
using namespace std;

#define all(x) x.begin(), x.end()
#define sz(x) int((x).size())
typedef pair<int,int> pi;
typedef long long ll;
#define pb push_back
#define S second
#define F first

void f(){
  int mxDst = 0;
  int farthestLeaf = 0;
  int n; cin>>n;
  vector<int> adj[n];
  
  for(int i = 0;i<n-1;i++){
    int u, v;
    cin>>u>>v;
    u--, v--;
    adj[u].pb(v);
    adj[v].pb(u);
  }

  function <void(int,int,int)> dfs = [&](int a, int e, int dst){
    if(dst > mxDst){
      mxDst = dst;
      farthestLeaf = a;
    }
    for(int u:adj[a]){
      if(u != e) dfs(u, a, dst+1);
    }
  };

  dfs(0, -1, 0);
  int diameterLeft = farthestLeaf;
  
  farthestLeaf = 0;
  mxDst = 0;

  dfs(diameterLeft, -1, 0);
  int diameterRight = farthestLeaf;

  vector<int> diameter;
  function <void(int,int,vector<int>)> dfs2 = [&](int a, int e, vector<int> cur){
    cur.pb(a);
    if(a == diameterRight){
      diameter = cur;
      return;
    }
    for(int u:adj[a]){
      if(u != e) dfs2(u, a, cur);
    }
  };
  int res = 0;
  function <void(int,int,int)> dfs3 = [&](int a, int e, int dst){
    if(a != diameterLeft && a != diameterRight && sz(adj[a]) == 1){
      res = max(res, dst);
    }
    for(int u:adj[a]){
      if(u != e) dfs3(u, a, dst+1);
    }
  };

  vector<int> v;
  dfs2(diameterLeft, -1, v);

  for(int x:diameter){
    dfs3(x, -1, 0);
    cout<<x<<" "<<res<<"\n";
  }
  cout<<res<<"\n";
}

int main(){
  cin.tie(0); ios_base::sync_with_stdio(0);
  int t = 1;
  cin>>t;
  while(t--) f();
  return 0;
}