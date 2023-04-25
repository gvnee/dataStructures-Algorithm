#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define sz(x) int((x).size())
#define debug(x) cerr<<#x<<": "<<(x)<<"\n"
#define pb push_back

void f(){
  int n;
  cin>>n;
  vector<int> a(n);
  for(int i = 0;i<n;i++) cin>>a[i];
  sort(a.begin(), a.end());
  ll res = 0;
  for(int i = 0;i<n;i++){
    vector<int> c = a;
    ll cur = 1;
    for(int b = 1;b<max(n-i, i);b++){
      int l = i-1, r = i+1;
      while(l>0 && r<n){
        if(l>0 && c[l] <= )
      }
    }
    res = max(res, cur);
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