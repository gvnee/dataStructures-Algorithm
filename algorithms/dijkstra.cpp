#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define sz(x) int((x).size())
#define pb push_back
const ll INF = INT_FAST64_MAX;

int main(){
  int n, m;
  cin>>n>>m;
  vector<pair<ll, int>> adj[n+1];
  int a, b, w;
  while(m--){
    cin>>a>>b>>w;
    adj[a].pb({b, w});
  }
  bool visited[n+1] = {};

  vector<ll> dst(n+1);
  for(ll &i:dst) i = INF;
  dst[1] = 0;

  priority_queue<pair<ll, int>> q;
  q.push({0, 1});
  
  while(!q.empty()){
    int a = q.top().second; q.pop();
    if(visited[a]) continue;
    visited[a] = true;

    for(auto it:adj[a]){
      int b = it.first, w = it.second;
      if(dst[a] + w < dst[b]){
        dst[b] = dst[a] + w;
        q.push({-dst[b], b});
      }
    }
  }

  for(int i = 1;i<=n;i++) cout<<dst[i]<<" \n"[i==n];
  
  return 0;
}