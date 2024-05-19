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
  vector<ll> a, b, dis;
  for(ll i = 0;i<n;i++){
    int t; cin>>t;
    if(empty(a) || t != a[sz(a)-1]){
      a.pb(t);
      dis.pb(LLONG_MAX);
    }
  }
  for(ll i = 0;i<m;i++){
    int t; cin>>t;
    if(empty(b) || t != b[sz(b)-1]) b.pb(t);
  }
  n = sz(a);
  m = sz(b);

  ll city = 0, tower = 0;
  ll res = 0;

  while(city < n){
    dis[city] = min(dis[city], abs(a[city] - b[tower]));
    if(a[city] <= b[tower] || tower == m-1){
      res = max(res, dis[city]);
      city++;
    }
    else tower++;
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