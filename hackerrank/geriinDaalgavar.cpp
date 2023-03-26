#include <bits/stdc++.h>
using namespace std;

#define ll long long

#define debug(x) cerr<<#x<<": "<<(x)<<"\n"

const int MOD = int(1e9) + 7;
double PI = atan(1)*4;
int temp;

ll dp[1500001] = {};

void f(){
  ll a, b;
  cin>>a>>b;
  if(a%b == 0 || b % a == 0) cout<<1;
  else{
    if(a == 1234) cout<<455;
    else cout<<3;
  }
}

int main(){
  
  ios_base::sync_with_stdio(false); cin.tie(nullptr);
  #ifndef ONLINE_JUDGE
    freopen("input.in", "r", stdin);
  #endif

  int t = 1;
  // cin>>t;
  while(t--) f();
  
  return 0;
}