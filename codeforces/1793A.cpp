#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define sz(x) int((x).size())
#define pb push_back

void f(){
  ll a, b, n, m;
  cin>>a>>b>>n>>m;
  ll res = b*n;
  ll whole = n / (m+1);
  ll rem = n % (m+1);
  rem *= min(a, b);
  res = min(res, m * whole*a+rem);
  cout<<res<<"\n";
}

int main(){
  cin.tie(0); ios_base::sync_with_stdio(0);
  int t = 1;
  cin>>t;
  while(t--) f();
  return 0;
}