#include<bits/stdc++.h>
using namespace std;

#define all(x) x.begin(), x.end()
#define sz(x) int((x).size())
typedef pair<int,int> pi;
typedef long long ll;
#define pb push_back
#define S second
#define F first

const int N = 2e5;

vector<int> adj[N];
bool visited[N] = {};
vector<int> rep;

void dfs(int x){
  visited[x] = true;
  for(int u:adj[x]){
    if(!visited[u]) dfs(u);
  }
}

void f(){
  int n, m;
  cin>>n>>m;
  while(m--){
    int a, b;
    cin>>a>>b;
    adj[a].pb(b);
    adj[b].pb(a);
  }
  for(int i = 1;i<=n;i++){
    if(visited[i]) continue;
    visited[i] = true;
    rep.pb(i);
    dfs(i);
  }

  cout<<sz(rep)-1<<"\n";
  for(int i = 1;i<sz(rep);i++){
    cout<<rep[i-1]<<' '<<rep[i]<<"\n";
  }
}

int main(){
  cin.tie(0); ios_base::sync_with_stdio(0);
  int t = 1;
  // cin>>t;
  while(t--) f();
  return 0;
}