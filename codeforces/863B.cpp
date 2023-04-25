#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define sz(x) int((x).size())
#define debug(x) cerr<<#x<<": "<<(x)<<"\n"
#define pb push_back

void f(){
  int n;
  cin>>n;
  n *= 2;
  vector<int> a(n);
  for(int i = 0;i<n;i++) cin>>a[i];
  sort(a.begin(), a.end());
  ll res = INT_MAX;

  for(int i = 0;i<n;i++){
    for(int j = i+1;j<n;j++){
      vector<int> v;
      for(int k = 0;k<n;k++){
        if(k != i && k != j) v.pb(a[k]);
      }
      ll cur = 0;
      for(int k = 0;k<sz(v)-1;k+=2){
        cur += v[k+1] - v[k];
      }
      res = min(cur, res);
    }
  }

  cout<<res<<"\n";
}

int main(){
  ios_base::sync_with_stdio(0); cin.tie(0);
  int t = 1;
  // cin>>t;
  while(t--) f();
  return 0;
}