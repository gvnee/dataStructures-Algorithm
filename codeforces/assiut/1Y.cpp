#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define sz(x) int((x).size())
#define debug(x) cerr<<#x<<": "<<(x)<<"\n"
#define pb push_back

void f(){
  ll a, b, c, d;
  cin>>a>>b>>c>>d;
  ll m = a%100*b%100*c%100*d%100;
  if(m <= 9) cout<<"0"<<m;
  else cout<<m<<"\n";
}

int main(){
  cin.tie(0); ios_base::sync_with_stdio(0);
  int t = 1;
  // cin>>t;
  while(t--) f();
  return 0;
}