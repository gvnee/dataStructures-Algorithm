#include<bits/stdc++.h>
using namespace std;

#define all(x) x.begin(), x.end()
#define sz(x) int((x).size())
#define pi pair<int, int>
typedef long long ll;
#define pb push_back
#define S second
#define F first

void f(){
  int n, kald, fint, varm;
  cin>>n>>kald>>fint>>varm;
  vector<pair<ll, int>> a;
  for(int i = 0;i<n;i++){
    ll l, r;
    cin>>l>>r;
    r++;
    a.pb({l, 1});
    a.pb({r, -1});
  }

  sort(all(a));
  ll cur = n * kald, res = cur;
  for(auto [_, i]:a){
    if(i == 1) cur -= kald - fint;
    else cur -= fint - varm;
    res = max(cur, res);
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