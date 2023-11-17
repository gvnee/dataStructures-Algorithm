#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define sz(x) int((x).size())
#define pb push_back

void f(){
  int n;
  cin>>n;
  ll a[n+1];
  for(int i = 1;i<=n;i++){
    cin>>a[i];
  }
  ll res = 0;
  for(int d = 1;d<=n/2+1;d++){
    if(n % d != 0) continue;
    ll mn = LONG_MAX, mx = LONG_MIN;
    int c = 0;
    ll cur = 0;
    for(int i = 1;i<=n;i++){
      cur+=a[i];
      c++;
      if(c == d){
        c = 0;
        mn = min(cur, mn);
        mx = max(cur, mx);
        cur = 0;
      }
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