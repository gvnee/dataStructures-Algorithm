#include <bits/stdc++.h>
using namespace std;
using ll = long long;
void solve(){
  ll a,b;
  cin>>a>>b;
  ll dif = floor(sqrt(b)) - ceil(sqrt(a))+1;
  // cout<<sqrt(b)<<" "<<sqrt(a)<<"\n";
  cout<<dif<<"\n";
}
int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  #ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  #endif
  int t;
  cin>>t;
  while(t--) solve(); 
  return 0;
}