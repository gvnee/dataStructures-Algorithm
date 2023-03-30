#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define debug(x) cerr<<#x<<": "<<(x)<<"\n"

const int MOD = int(1e9) + 7;
double PI = atan(1)*4;
int temp;

ll findDif(ll a){
  ll mn = INT_MAX;
  ll mx = INT_MIN;
  while(a>0){
    ll cur = a%10;
    mn = min(mn, cur);
    mx = max(mx, cur);
    a /= 10;
  }
  return mx - mn;
}

void f(){
  ll l, r;
  cin>>l>>r;
  ll mn = INT_MAX;
  ll res = 0;
  for(ll i = l;i<=r;i++){
    ll cur = findDif(i);
    if(cur == 0){
      cout<<i<<"\n";
      return;
    }
    if(cur < mn){
      mn = cur;
      res = i;
    }
  }
  cout<<res<<"\n";
}

int main(){
  
  ios_base::sync_with_stdio(false); cin.tie(nullptr);

  int t = 1;
  cin>>t;
  while(t--) f();
  
  return 0;
}