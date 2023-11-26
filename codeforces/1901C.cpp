#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define sz(x) int((x).size())
#define pb push_back

void f(){
  int n;
  cin>>n;
  int a[n];
  int mn = INT_MAX, mx = INT_MIN;
  for(int i = 0;i<n;i++){
    cin>>a[i];
    mn = min(mn, a[i]);
    mx = max(mx, a[i]);
  }
  vector<int> r;
  while(mn != mx){
    r.pb(mn % 2);
    mx = (mx + mn%2)/2;
    mn = (mn + mn%2)/2;
  }
  cout<<sz(r)<<"\n";
  if(sz(r) > 0 && sz(r) <= n){
    for(int i:r) cout<<i<<" ";
    cout<<"\n";
  }

}

int main(){
  cin.tie(0); ios_base::sync_with_stdio(0);
  int t = 1;
  cin>>t;
  while(t--) f();
  return 0;
}