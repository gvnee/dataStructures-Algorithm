#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define sz(x) int((x).size())
#define pb push_back

void f(){
  int n;
  cin>>n;
  int a[n];
  for(int i = 0;i<n;i++){
    cin>>a[i];
  }
  sort(a, a+n);
  ll mx = LLONG_MIN, mn = LLONG_MAX;
  for(int i = 0;i<n/2;i++){
    ll cur = a[i] + a[n-i-1];
    mx = max(mx, cur);
    mn = min(mn, cur);
  }
  cout<<mx<<"\n";
  cout<<mn<<"\n";
}

int main(){
  cin.tie(0); ios_base::sync_with_stdio(0);
  int t = 1;
  // cin>>t;
  while(t--) f();
  return 0;
}