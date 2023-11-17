#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define sz(x) int((x).size())
#define pb push_back

void f(){
  int n;
  cin>>n;
  ll a[n];
  map<ll, ll> m;
  for(int i = 0;i<n;i++){
    cin>>a[i];
    m[a[i]]++;
  }
  ll res = m[1] * m[2];
  for(auto [ff, ss]:m){
    res += (ss * (ss-1))/2;
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