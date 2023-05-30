#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define sz(x) int((x).size())
#define debug(x) cerr<<#x<<": "<<(x)<<"\n"
#define pb push_back

const int mxn = 101;
vector<int> v[mxn];

bool bfs(int from, int to){
  bool visited[mxn] = {};
  queue<int> q;
  q.push(from);
  while(!q.empty()){
    int x = q.front(); q.pop();
    for(int u:v[x]){
      if(u == to) return true;
      if(visited[u]) continue;
      q.push(u);
    }
  }
  return false;
}

void f(){
  int n;
  cin>>n;
  int a, b;
  for(int i = 1;i<=n;i++){
    cin>>a>>b;
    v[a].pb(b);
  }

  for(int cur = 1;cur<=n;cur++){
    bool reachable = true;
    for(int i = 1;i<=n;i++){
      if(cur == i) continue;
      if(!bfs(i, cur)){
        reachable = false;
        break;
      }
    }
    if(reachable){
      cout<<cur<<"\n";
      return;
    }
  }
  cout<<"-1\n";
}

int main(){
  ios_base::sync_with_stdio(0); cin.tie(0);
  freopen("factory.in", "r", stdin);
  freopen("factory.out", "w", stdout);
  int t = 1;
  // cin>>t;
  while(t--) f();
  return 0;
}