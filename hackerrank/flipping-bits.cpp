#include <bits/stdc++.h>
using namespace std;
using ll = long long;
ll INF = WINT_MAX;
void solve(){
  ll n;
  cin>>n;
  cout<<INF - n<<"\n";
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