#include <bits/stdc++.h>
using namespace std;

using ll = long long;

#define debug(x) cerr<<#x<<": "<<(x)<<"\n"

const int MOD = int(1e9) + 7;
double PI = atan(1)*4;
int temp;

void f(){
  ll n;
  cin>>n;
  if(n <= 1){
    cout<<0<<"\n";
    return;
  }
  if(sqrtl(n) - (ll)sqrtl(n) == 0){
    cout<<(ll)sqrtl(n) - 1<<"\n";
    return;
  }
  cout<<(ll)sqrtl(n)<<"\n";
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