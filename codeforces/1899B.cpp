#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define sz(x) int((x).size())
#define pb push_back

void f(){
  int n;
  cin>>n;
  ll a[n+1] = {};
  for(int i = 1;i<=n;i++){
    cin>>a[i];
    a[i] += a[i-1];
  }
  ll res = 0;
  for(int d = 1;d<=n/2;d++){
    if(n % d != 0) continue;
    ll mn = LLONG_MAX, mx = LLONG_MIN;
    for(int i = 1;i<=n-d+1;i+=d){
      ll cur = a[i+d-1] - a[i-1];
      mn = min(cur, mn);
      mx = max(cur, mx);
    }
    res = max(abs(mx - mn), res);
  }
  cout<<res<<"\n";
}

int main(){
  cin.tie(0); ios_base::sync_with_stdio(0);
  int t = 1;
  cin>>t;
  while(t--) f();
  return 0;
}