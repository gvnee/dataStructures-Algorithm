#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define sz(x) int((x).size())
#define debug(x) cerr<<#x<<": "<<(x)<<"\n"
#define pb push_back

void f(){
  ll x, y;
  cin>>x>>y;
  printf("%lld + %lld = %lld\n", x, y, x+y);
  printf("%lld * %lld = %lld\n", x, y, x*y);
  printf("%lld - %lld = %lld\n", x, y, x-y);
}

int main(){
  cin.tie(0); ios_base::sync_with_stdio(0);
  int t = 1;
  // cin>>t;
  while(t--) f();
  return 0;
}