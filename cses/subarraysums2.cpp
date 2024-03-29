#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define sz(x) int((x).size())
#define debug(x) cerr<<#x<<": "<<(x)<<"\n"
#define pb push_back

void f(){
  int n, x;
  cin>>n>>x;
  ll a[n+1] ={};
  for(int i = 1;i<=n;i++){
    cin>>a[i];
    a[i] += a[i-1];
  }

  unordered_map<ll, ll> m;
  m[0] = 1;
  ll res = 0;
  for(int i = 1;i<=n;i++){
    res += m[a[i] - x];
    m[a[i]]++;
  }
  
  cout<<res<<"\n";
}

int main(){
  cin.tie(0); ios_base::sync_with_stdio(0);
  int t = 1;
  // cin>>t;
  while(t--) f();
  return 0;
}