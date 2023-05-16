#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define sz(x) int((x).size())
#define debug(x) cerr<<#x<<": "<<(x)<<"\n"
#define pb push_back

void f(){
  int n, m;
  cin>>n>>m;
  vector<int> adj[n];
  int a, b;
  while(m--){
    cin>>a>>b;
    a--, b--;
    adj[a].pb(b);
    adj[b].pb(a);
  }
  vector<int> res(n);
  for(int i = 0;i<n;i++){
    if(res[i] == 0) res[i] = 1;
    for(int u:adj[i]){
      if(res[u] == 0){
        if(res[i] != 1) res[u] = 1;
        else res[u] = res[i] + 1;
      }
      else if(res[u] == res[i])
        res[u] = res[i] + 1;
    }
  }
  for(int u:res) cout<<u;
}

int main(){
  ios_base::sync_with_stdio(0); cin.tie(0);
  freopen("revegetate.in", "r", stdin);
  freopen("revegetate.out", "w", stdout);
  int t = 1;
  // cin>>t;
  while(t--) f();
  return 0;
}