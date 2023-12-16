#include<bits/stdc++.h>
using namespace std;

#define all(x) x.begin(), x.end()
#define sz(x) int((x).size())
typedef pair<int,int> pi;
typedef long long ll;
#define pb push_back
#define S second
#define F first

const int N = 3*1e5;

vector<int> c;
vector<int> adj[N];

void dfs(int x, int e){
  c.back()++;
  for(auto u:adj[x]){
    if(u!=e && u != 0){
      dfs(u, x);
    }
  }
} 

void f(){
  int n; cin>>n;
  for(int i = 0;i<n-1;i++){
    int u, v; cin>>u>>v;
    u--, v--;
    adj[u].pb(v);
    adj[v].pb(u);
  }

  for(int x:adj[0]){
    c.pb(0);
    dfs(x, -1);
  }

  int res = INT_MAX;
  for(int x:c){
    res = min(res, n - x);
  }
  
  cout<<res<<"\n";
}

int main(){
  cin.tie(0); ios_base::sync_with_stdio(0);
  int t = 1;
  // cin>>t;
  while(t--) f();
  return 0;
}