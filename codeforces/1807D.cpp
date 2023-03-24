#include <bits/stdc++.h>
using namespace std;

using ll = long long;

#define debug(x) cerr<<#x<<": "<<(x)<<"\n"

const int MOD = int(1e9) + 7;
double PI = atan(1)*4;
int temp;

void f(){
  ll n, q;
  cin>>n>>q;
  ll arr[n+1];
  arr[0] = 0;
  for(ll i = 1;i<=n;i++){
    cin>>arr[i];
  }
  for(ll i = 2;i<=n;i++) arr[i] += arr[i-1];
  ll l, r, k;
  for(ll i = 0;i<q;i++){
    cin>>l>>r>>k;
    ll range = arr[r] - arr[l-1];
    ll re = k * (r-l+1);
    if((arr[n] - range + re)%2==0){
      cout<<"NO\n";
    }
    else cout<<"YES\n";
  }
}

int main(){
  
  ios_base::sync_with_stdio(false); cin.tie(nullptr);
  #ifndef ONLINE_JUDGE
    freopen("input.in", "r", stdin);
  #endif

  int t = 1;
  cin>>t;
  while(t--) f();
  
  return 0;
}