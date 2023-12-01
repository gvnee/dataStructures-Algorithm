#include<bits/stdc++.h>
using namespace std;

#define all(x) x.begin(), x.end()
#define sz(x) int((x).size())
typedef pair<int,int> pi;
typedef long long ll;
#define pb push_back
#define S second
#define F first

void f(){
  ll n; cin>>n;
  ll a[n+2] = {};
  ll s = 0;
  for(ll i = 1;i<=n;i++){
    cin>>a[i];
    s += a[i] * i;
  }

  ll cur = 0;
  for(ll i = n;i>=2;i--){
    if(a[i] >= 0){
      cur += a[i];
      continue;
    }
    ll sub = a[i] * i + a[i-1] * (i-1);
    ll add = (a[i] + a[i-1]) * (i-1);
    if(s < s - sub + add - cur){
      s = s - sub + add - cur;
      a[i-1] += a[i];
      a[i] = 0;
    }
    cur += a[i];
  }
  cout<<s<<"\n";
}

int main(){
  cin.tie(0); ios_base::sync_with_stdio(0);
  int t = 1;
  cin>>t;
  while(t--) f();
  return 0;
}