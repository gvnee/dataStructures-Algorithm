#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define sz(x) int((x).size())
#define debug(x) cerr<<#x<<": "<<(x)<<"\n"
#define pb push_back

void f(){
  int a, b, c;
  cin>>a>>b>>c;
  int res = 0;
  if(a + b <= c) res = max(res, c-(a+b)+1);
  if(a + c <= b) res = max(res, b-(a+c)+1);
  if(b + c <= a) res = max(res, a-(c+b)+1);
  cout<<res<<"\n";
}

int main(){
  ios_base::sync_with_stdio(0); cin.tie(0);
  int t = 1;
  // cin>>t;
  while(t--) f();
  return 0;
}