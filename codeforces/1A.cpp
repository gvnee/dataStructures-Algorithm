#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define sz(x) int((x).size())
#define debug(x) cerr<<#x<<": "<<(x)<<"\n"
#define pb push_back

void f(){
  ll n, m, a;
  cin>>n>>m>>a;
  ll x = 0, y = 0;
  if(n % a == 0) x = n/a;
  else x = n/a+1;
  if(m % a == 0) y = m/a;
  else y = m/a+1;
  cout<<x*y<<"\n";
}

int main(){
  ios_base::sync_with_stdio(0); cin.tie(0);
  int t = 1;
  // cin>>t;
  while(t--) f();
  return 0;
}