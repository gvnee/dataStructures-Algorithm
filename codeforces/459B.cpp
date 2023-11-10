#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define sz(x) int((x).size())
#define pb push_back

void f(){
  ll n;
  cin>>n;
  vector<ll> a(n);
  for(int i = 0;i<n;i++){
    cin>>a[i];
  }
  sort(a.begin(), a.end());
  ll mn = a[0], mx = a[n-1];
  
  ll mnc = count(a.begin(), a.end(), mn);
  ll mxc = count(a.begin(), a.end(), mx);
  ll ways = mnc*mxc;
  if(mn == mx) ways = (n-1) * n / 2;
  cout<<mx-mn<<' '<<ways<<"\n";
}

int main(){
  cin.tie(0); ios_base::sync_with_stdio(0);
  int t = 1;
  // cin>>t;
  while(t--) f();
  return 0;
}