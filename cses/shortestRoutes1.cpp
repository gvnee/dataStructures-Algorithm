#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define sz(x) int((x).size())
#define debug(x) cerr<<#x<<": "<<(x)<<"\n"
#define pb push_back

void f(){
  int n, m;
  cin>>n>>m;
  vector<pair<int, int>> adj[n+1];
  int a, b, w;
  while(m--){
    cin>>a>>b>>w;
    adj[a].pb({b, w});
  }

  vector<ll> dst(n+1);
  for(auto &i:dst) i = INT64_MAX;
  dst[1] = 0;

  bool visited[n+1] = {};

  priority_queue<pair<ll, int>> q;
  q.push({0, 1});
  
  while(!q.empty()){
    int a = q.top().second; q.pop();
    if(visited[a]) continue;
    visited[a] = true;
    for(auto u:adj[a]){
      int b = u.first, w = u.second;
      if(dst[a] + w < dst[b]){
        dst[b] = dst[a] + w;
        q.push({-dst[b], b});
      }
    }
  }

  for(int i = 1;i<=n;i++) cout<<dst[i]<<" \n"[i==n];
}

int main(){
  ios_base::sync_with_stdio(0); cin.tie(0);
  int t = 1;
  // cin>>t;
  while(t--) f();
  return 0;
}