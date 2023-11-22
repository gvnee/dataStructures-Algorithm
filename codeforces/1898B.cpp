#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define sz(x) int((x).size())
#define pb push_back

void f(){
  int n; cin>>n;
  ll a[n] = {};
  for(int i = 1;i<=n;i++){
    cin>>a[i];
  }
  ll res = 0;
  for(int i = n-1;i>=1;i--){
    if(a[i] <= a[i+1]) continue;
    if(a[i] % a[i+1] == 0){
      res += a[i] / a[i+1] - 1;
      a[i] = a[i+1];
    }
    else{
      ll k = a[i] / a[i+1] + 1;
      a[i] /= k;
      res += k-1;
    }
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