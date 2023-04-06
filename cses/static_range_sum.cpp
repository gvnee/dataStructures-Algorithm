#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define sz(x) int((x).size())
#define debug(x) cerr<<#x<<": "<<(x)<<"\n"

void f(){
  ll n, q;
  cin>>n>>q;
  vector<ll> a(n+1);
  for(int i = 1;i<=n;i++) cin>>a[i];
  vector<ll> prefixSum = a;
  prefixSum[0] = 0;
  for(int i = 1;i<=n;i++){
    prefixSum[i] += prefixSum[i-1];
  }
  ll l, r;
  while(q--){
    cin>>l>>r;
    cout<<prefixSum[r] - prefixSum[l-1]<<"\n";
  }
}

int main(){
  
  ios_base::sync_with_stdio(0); cin.tie(0);

  int t = 1;
  // cin>>t;
  while(t--) f();
  
  return 0;
}