#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  #ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  #endif
  
  int n;
  cin>>n;
  int a;
  vector<int> adj[n+1];
  for(int i = 1;i<=n;i++){
    cin>>a;
    adj[i].push_back(a);
  }

  for(auto node:adj){
    for(int i = 0;i<node.size();i++){
      cout<<node[i]<<" ";
    }
    cout<<"\n";
  }

  return 0;
}