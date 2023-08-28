#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define sz(x) int((x).size())
#define debug(x) cerr<<#x<<": "<<(x)<<"\n"
#define pb push_back

void f(){
  int n;
  cin>>n;
  ll a[n+1] = {};
  for(int i = 1;i<=n;i++){
    cin>>a[i];
    a[i] += a[i-1];
    a[i] %= n;
    cout<<a[i]<<" \n"[i==n];
  }
}

int main(){
  cin.tie(0); ios_base::sync_with_stdio(0);
  int t = 1;
  // cin>>t;
  while(t--) f();
  return 0;
}