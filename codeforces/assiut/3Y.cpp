#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define sz(x) int((x).size())
#define pb push_back

void f(){
  int n, q, l, r;
  cin>>n>>q;
  ll a[n+1] = {};
  for(int i = 1;i<=n;i++){
    cin>>a[i];
    a[i] += a[i-1];
  }
  while(q--){
    cin>>l>>r;
    cout<<a[r] - a[l-1]<<"\n";
  }
}

int main(){
  cin.tie(0); ios_base::sync_with_stdio(0);
  int t = 1;
  // cin>>t;
  while(t--) f();
  return 0;
}