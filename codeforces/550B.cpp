#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define sz(x) int((x).size())
#define pb push_back
#define pc __builtin_popcount

void f(){
  int n, l, r, x;
  cin>>n>>l>>r>>x;
  int a[n+1] = {};
  for(int i = 0;i<n;i++){
    cin>>a[i];
  }

  int res = 0;

  for(int i = 0;i<(1<<n);i++){
    if(pc(i) < 2) continue;
    ll total = 0;
    int mn = INT_MAX, mx = INT_MIN;
    for(int j = 0;j<n;j++){
      if(i&(1<<j)){
        total += a[j];
        mn = min(mn, a[j]);
        mx = max(mx, a[j]);
      }
    }
    if(l<=total && total<=r && mx - mn >= x) res++;
  }
  cout<<res<<"\n";
}

int main(){
  cin.tie(0); ios_base::sync_with_stdio(0);
  int t = 1;
  // cin>>t;
  while(t--) f();
  return 0;
}