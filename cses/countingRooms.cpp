#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define sz(x) int((x).size())
#define debug(x) cerr<<#x<<": "<<(x)<<"\n"
#define pb push_back

int id[1000010];
vector<int> adj[1000010];
int cur = 1;
void bfs(int a){
  if(adj[a].empty()) return;
  queue<int> q;
  q.push(a);
  while(!q.empty()){
    int s = q.front(); q.pop();
    id[s] = cur;
    for(int u:adj[s]){
      if(id[u] == cur) continue;
      id[u] = cur;
      q.push(u);
    }
  }
}

void f(){

  memset(id, -1, sizeof(id));
  
  int n, m;
  cin>>n>>m;
  string arr[n];
  for(int i = 0;i<n;i++){
    cin>>arr[i];
  }

  vector<int> fl;
  for(int i = 0;i<n;i++){
    for(int j = 0;j<m;j++){
      if(arr[i][j] == '.'){
        fl.pb(i*m + j);
        if(j != 0 && arr[i][j-1] == '.'){
          adj[i*m+j].pb(i*m+j-1);
        }
        if(i != 0 && arr[i-1][j] == '.'){
          adj[i*m+j].pb((i-1)*m+j);
        }
        if(j < m - 1 && arr[i][j+1] == '.'){
          adj[i*m+j].pb(i*m+j+1);
        }
        if(i < n - 1 && arr[i+1][j] == '.'){
          adj[i*m+j].pb((i+1)*m+j);
        }
      }
    }
  }

  for(auto i:fl){
    if(id[i] == -1){
      bfs(i);
      cur++;
    }
  }
  cout<<cur-1<<"\n";
}

int main(){
  ios_base::sync_with_stdio(0); cin.tie(0);
  int t = 1;
  // cin>>t;
  while(t--) f();
  return 0;
}