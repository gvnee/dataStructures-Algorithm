#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  #ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  #endif
  int n, m;
  cin>>n>>m;
  vector<int> coins;
  int a;
  for(int i = 0;i<m;i++){
    cin>>a;
    coins.push_back(a);
  }
  ll count[10000] = {0};
  count[0] = 1;
  for(int i = 1;i<=n;i++){
    for(auto c:coins){
      if(i-c >= 0) count[i] += count[i-c];
    }
  }
  cout<<count[n]<<"\n";
  return 0;
}