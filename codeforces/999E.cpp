#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define sz(x) int((x).size())
#define pb push_back

const int mxn = 5e4+5;

vector<int> a[mxn];
bool can[mxn] = {};

void bfs(int x){
  bool visited[mxn] = {};
  queue<int> q;
  q.push(x);
  visited[x] = true;
  while(!q.empty()){
    int u = q.front(); q.pop();
    for(int v:a[u]){
      can[v] = true;
      if(visited[v]) continue;
      // cout<<"bfs: "<<u<<"->"<<v<<"\n";
      visited[v] = true;
      q.push(v);
    }
  }
}

void f(){
  int n, m, s;
  cin>>n>>m>>s;
  int u, v;
  for(int i = 0;i<m;i++){
    cin>>u>>v;
    a[u].pb(v);
  }

  int res = 0;
  bfs(s);
  for(int i = 1;i<=n;i++){
    if(i == s || can[i]) continue;
    res++;
    // cout<<i<<"\n";
    a[s].pb(i);
    bfs(s);
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