#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define sz(x) int((x).size())
#define debug(x) cerr<<#x<<": "<<(x)<<"\n"
#define pb push_back

void f(){
  int n, l, r, x;
  cin>>n>>l>>r>>x;
  int a[n];
  for(int i = 0;i<n;i++) cin>>a[i];

  int res = 0;
  for(int mask = 0;mask<(1<<n);mask++){
    int total = 0, mn = INT_MAX, mx = 0;
    for(int i = 0;i<n;i++){
      if(mask & (1<<i)){
        total += a[i];
        mn = min(mn, a[i]);
        mx = max(mx, a[i]);
      }
    }
    res += total>=l && total<=r && mx-mn>=x;
  }
  cout<<res<<'\n';
}

int main(){
  ios_base::sync_with_stdio(0); cin.tie(0);
  int t = 1;
  // cin>>t;
  while(t--) f();
  return 0;
}