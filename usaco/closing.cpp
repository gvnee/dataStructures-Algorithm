#include<bits/stdc++.h>
using namespace std;

#define all(x) x.begin(), x.end()
#define sz(x) int((x).size())
typedef pair<int,int> pi;
typedef long long ll;
#define pb push_back
#define S second
#define F first

const int MXN = 2e5;

int u[MXN+1];
int s[MXN+1];
bool active[MXN+1] = {};

int find(int a){
  int root = a;
  while(root != u[root]) root = u[root];

  while(a != u[a]){
    int next = u[a];
    u[a] = root;
    a = next;
  }
  
  return root;
}

bool unite(int a, int b){
  a = find(a);
  b = find(b);
  if(a == b) return false;
  if(s[a]<s[b]) swap(a, b);
  u[b] = a;
  s[a] += s[b];
  return true;
}

void f(){
  int unionCount = 0;
  int n, m; cin>>n>>m;

  for(int i = 1;i<=n;i++){
    u[i] = i;
    s[i] = 1;
  }
  vector<int> adj[n+1];
  for(int i = 0;i<m;i++){
    int a, b;
    cin>>a>>b;
    adj[a].pb(b);
    adj[b].pb(a);
  }
  vector<int> q(n);
  for(int i = 0;i<n;i++){
    cin>>q[i];
  }
  vector<string> res;
  for(int i = n-1;i>=0;i--){
    int cur = q[i];
    active[cur] = true;
    unionCount++;
    for(int x:adj[cur]){
      if(active[x]) unionCount -= unite(cur, x);
    }
    res.pb(unionCount == 1 ? "YES" : "NO");
  }
  reverse(all(res));
  for(auto s:res) cout<<s<<"\n";
}

int main(){
  cin.tie(0); ios_base::sync_with_stdio(0);
  // freopen("closing.in", "r", stdin);
  // freopen("closing.out", "w", stdout);
  int t = 1;
  // cin>>t;
  while(t--) f();
  return 0;
}