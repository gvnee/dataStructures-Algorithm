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
  int n, q; cin>>n>>q;
  ll a[n+1] = {};
  for(int i = 1;i<=n;i++){
    cin>>a[i];
  }
  sort(a, a+n+1);
  for(int i = 1;i<=n;i++){
    a[i] += a[i-1];
  }
  while(q--){
    ll x; cin>>x;
    int l = 0, r = n;
    while(l<r){
      int mid = l + (r-l+1)/2;
      if(x >= a[mid]) l = mid;
      else r = mid - 1;
    }
    cout<<l<<"\n";
  }
}

int main(){
  cin.tie(0); ios_base::sync_with_stdio(0);
  int t = 1;
  // cin>>t;
  while(t--) f();
  return 0;
}