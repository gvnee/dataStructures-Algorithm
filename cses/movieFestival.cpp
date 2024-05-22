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
  int n; cin>>n;
  vector<pair<ll, ll>> a;
  for(int i = 0;i<n;i++){
    ll x, y; cin>>x>>y;
    a.pb({y, x});
  }
  sort(all(a));
  int res = 1;
  ll last = a[0].F;
  for(int i = 1;i<n;i++){
    if(a[i].S >= last){
      res++;
      last = a[i].F;
    }
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