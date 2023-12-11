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
  ll n, m; cin>>n>>m;
  vector<ll> a(n);
  for(int i = 0;i<n;i++){
    cin>>a[i];
  }
  sort(all(a));
  reverse(all(a));
  
  auto func = [&](ll days){
    ll cur = 0;
    ll pen = 0;
    ll count = 1;
    for(int i = 0;i<n;i++){
      cur += max(0LL, a[i] - pen);
      if(count == days){
        pen++;
        count = 1;
      }
      else count++;
    }
    return cur;
  };

  // for(int i = 1;i<=n;i++){
  //   cout<<i<<": "<<func(i)<<"\n";
  // }
  
  ll l = 1, r = n+1;

  while(l<r){
    ll mid = l+(r-l)/2;
    if(func(mid) >= m) r = mid;
    else l = mid+1;
  }
  if(l>n) cout<<"-1\n";
  else cout<<l<<"\n";
}

int main(){
  cin.tie(0); ios_base::sync_with_stdio(0);
  int t = 1;
  // cin>>t;
  while(t--) f();
  return 0;
}