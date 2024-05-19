#include<bits/stdc++.h>
using namespace std;

#define all(x) x.begin(), x.end()
#define sz(x) int((x).size())
typedef pair<int,int> pi;
typedef long long ll;
#define pb push_back
#define S second
#define F first

const int N = 1e5+1;
vector<int> adj[N];
bool visited[N] = {};
int color[N] = {};

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

    color[i] = 1;
    
    queue<int> q;
    q.push(i);
    while(!q.empty()){
      int cur = q.front();
      q.pop();
      if(visited[cur]) continue;
      visited[cur] = true;

      for(int x:adj[cur]){
        if(color[cur] == color[x]){
          cout<<"IMPOSSIBLE\n";
          return;
        }
        if(color[cur] == 1) color[x] = 2;
        else color[x] = 1;
      }

      for(int x:adj[cur]){
        q.push(x);
      }

    }
  }
  
  for(int i = 1;i<=n;i++) cout<<color[i]<<" ";
}

int main(){
  cin.tie(0); ios_base::sync_with_stdio(0);
  int t = 1;
  // cin>>t;
  while(t--) f();
  return 0;
}