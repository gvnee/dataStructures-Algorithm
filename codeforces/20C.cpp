#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define sz(x) int((x).size())
#define pb push_back

const int mxn = 1e5+2;
priority_queue<pair<ll, int>> q;
vector<pair<int, int>> a[mxn];
vector<int> r;
bool visited[mxn] = {};
ll dst[mxn];
int pr[mxn];

void printPath(int n){
  if(n != 1)
    printPath(pr[n]);
  cout<<n<<" ";
}

void f(){
  int n, m;
  cin>>n>>m;

  for(int i = 1;i<=n;i++){
    dst[i] = 1e18;
    pr[i] = i;
  }
  dst[1] = 0;
  int v1, v2, w;
  while(m--){
    cin>>v1>>v2>>w;
    a[v1].pb({v2, w});
    a[v2].pb({v1, w});
  }

  q.push({0, 1});

  while(!q.empty()){
    int u = q.top().second;
    q.pop();
    if(visited[u]) continue;
    visited[u] = true;
    for(auto c:a[u]){
      int b = c.first, w = c.second;
      if(dst[u] + w < dst[b]){
        dst[b] = dst[u] + w;
        pr[b] = u;
      }
      q.push({-dst[b], b});
    }
  }
  
  if(dst[n] == 1e18){
    cout<<"-1\n";
    return;
  }
  printPath(n);
}

int main(){
  cin.tie(0); ios_base::sync_with_stdio(0);
  int t = 1;
  // cin>>t;
  while(t--) f();
  return 0;
}