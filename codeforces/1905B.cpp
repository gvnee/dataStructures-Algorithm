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
  int n; cin>>n;
  vector<int> adj[n];
  for(int i = 0;i<n-1;i++){
    int a, b;
    cin>>a>>b;
    a--, b--;
    adj[a].pb(b);
    adj[b].pb(a);
  }
  int leaves = 0;
  for(int i = 0;i<n;i++){
    if(sz(adj[i]) == 1){
      leaves++;
    }
  }
  cout<<(leaves+1)/2<<"\n";
}

int main(){
  cin.tie(0); ios_base::sync_with_stdio(0);
  int t = 1;
  cin>>t;
  while(t--) f();
  return 0;
}