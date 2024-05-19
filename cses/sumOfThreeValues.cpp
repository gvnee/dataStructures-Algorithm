#include<bits/stdc++.h>
using namespace std;

#define all(x) x.begin(), x.end()
#define sz(x) int((x).size())
typedef long long ll;
#define pb push_back
#define S second
#define F first

void f(){
  ll n, x; cin>>n>>x;
  vector<pair<ll, ll>> a;
  for(ll i = 0;i<n;i++){
    ll t; cin>>t;
    a.pb({t, i+1});
  }
  sort(all(a));

  for(int i = 0;i<n;i++){
    ll need = x - a[i].F;

    int l = i+1, r = n-1;
    while(l<r){
      if(a[l].F + a[r].F > need){
        r--;
        continue;
      }
      if(a[l].F + a[r].F == need){
        cout<<a[i].S<<" "<<a[l].S<<" "<<a[r].S<<"\n";
        return;
      }
      l++;
    }
  }
  
  cout<<"IMPOSSIBLE\n";
}

int main(){
  cin.tie(0); ios_base::sync_with_stdio(0);

  int t = 1;
  // cin>>t;
  while(t--) f();
  
  return 0;
}