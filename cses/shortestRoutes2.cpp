#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define sz(x) int((x).size())
#define debug(x) cerr<<#x<<": "<<(x)<<"\n"
#define pb push_back

const ll INF = INT_FAST64_MAX;

void f(){
  int n, m, q;
  cin>>n>>m>>q;

  ll adj[n+1][n+1] = {};
  ll dst[n+1][n+1] = {};
  
  ll a, b, w;
  while(m--){
    cin>>a>>b>>w;
    if(adj[a][b] != 0){
      adj[a][b] = min(adj[a][b], w);
      adj[b][a] = min(adj[b][a], w);
    }
    else adj[a][b] = w, adj[b][a] = w;
  }

  for(int i = 1;i<=n;i++){
    for(int j = 1;j<=n;j++){
      if(i == j) dst[i][j] = 0;
      else if(adj[i][j]) dst[i][j] = adj[i][j];
      else dst[i][j] = INF;
      // cout<<dst[i][j]<<" ";
    }
  }

  for(int k = 1;k<=n;k++)
    for(int i = 1;i<=n;i++)
      for(int j = 1;j<=n;j++){
        if(dst[i][k] != INF && dst[k][j] != INF)
          dst[i][j] = min(dst[i][j], dst[i][k] + dst[k][j]);
      }
  
  while(q--){
    cin>>a>>b;
    if(dst[a][b] == INF && dst[b][a] == INF) cout<<-1<<"\n";
    else cout<<min(dst[a][b], dst[b][a])<<"\n";
  } 
  
}

int main(){
  ios_base::sync_with_stdio(0); cin.tie(0);
  int t = 1;
  // cin>>t;
  while(t--) f();
  return 0;
}