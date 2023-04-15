#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define sz(x) int((x).size())
#define debug(x) cerr<<#x<<": "<<(x)<<"\n"
#define pb push_back

const ll MOD = 10e9+7;

void f(){
  ll a, b;
  cin>>a>>b;
  ll res = 1;
  for(int i = 1;i<=b;i++){
    res *= a;
    res %= MOD;
  }
  cout<<res<<"\n";
}

int main(){
  ios_base::sync_with_stdio(0); cin.tie(0);
  int t = 1;
  cin>>t;
  while(t--) f();
  return 0;
}