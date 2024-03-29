#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define sz(x) int((x).size())
#define debug(x) cerr<<#x<<": "<<(x)<<"\n"
#define pb push_back

void f(){
  int n;
  cin>>n;
  ll a[n+1];
  ll s = 0;
  map<ll, int> m;
  m[0]++;
  ll res = 0;
  for(int i = 1;i<=n;i++){
    cin>>a[i];
    s = (s + a[i]%n + n) % n;
    res += m[s];
    m[s]++;
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