#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define sz(x) int((x).size())
#define debug(x) cerr<<#x<<": "<<(x)<<"\n"
#define pb push_back

void f(){
  long double b, d;
  cin>>b>>d;
  ll res = 0;
  for(ll c = 1;c<=10000000000LL;c++){
     long double a = -b*(c-b)/d;
     if(a < 1) break;
     if(floor(a) == a && b/d == a/b + c/d){
      cout<<a<<" "<<c<<"\n";
      c++;
      res++;
     }
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