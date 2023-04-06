#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define sz(x) int((x).size())
#define debug(x) cerr<<#x<<": "<<(x)<<"\n"

const int MOD = int(1e9) + 7;
double PI = atan(1)*4;
int temp;

void f(){
  ll n;
  cin>>n;
  ll arr[n];
  ll res[n];
  if(n==2){
    ll a;
    cin>>a;
    cout<<a<<" "<<a<<"\n";
    return;
  }
  for(ll i = 0;i<n-1;i++) cin>>arr[i];
  res[0] = arr[0];
  res[n-1] = arr[n-2];
  for(ll i = 1;i<n;i++){
    res[i] = min(arr[i], arr[i-1]);
  }
  for(ll i = 0;i<n;i++)
    cout<<res[i]<<" \n"[i==n-1];
}

int main(){
  
  ios_base::sync_with_stdio(0); cin.tie(0);

  int t = 1;
  cin>>t;
  while(t--) f();
  
  return 0;
}