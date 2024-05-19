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
  int n, m;
  cin>>n>>m;
  vector<int> adj[n+1];
  while(m--){
    int a, b;
    cin>>a>>b;
    adj[a].pb(b);
    adj[b].pb(a);
  }
  bool visited[n+1] = {};
  vector<int> r;
  for(int i = 1;i<=n;i++){
    if(visited[i]) continue;
    visited[i] = true;
    r.pb(i);
    queue<int> q;
    q.push(i);
    while(!q.empty()){
      int cur = q.front();
      q.pop();
      for(int x:adj[cur]){
        if(visited[x]) continue;
        visited[x] = true;
        q.push(x);
      }
    }
  }
  cout<<sz(r)-1<<"\n";
  for(int i = 1;i<sz(r);i++){
    cout<<r[i-1]<<" "<<r[i]<<"\n";
  }
}

int main(){
  cin.tie(0); ios_base::sync_with_stdio(0);
  int t = 1;
  // cin>>t;
  while(t--) f();
  return 0;
}