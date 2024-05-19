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
    int x, y;
    cin>>x>>y;
    a.pb({y, x});
  }
  sort(all(a));
  ll res = 0;
    
  int l = 0, r = n-1;
  while(l<=r){
    if(l == r){
      res = max(res, a[l].F * 2);
      break;
    }
    
    if(a[l].S == 0 && a[r].S == 0){
      l++;
      r--;
      continue;
    }
    if(a[l].S == 0){
      l++;
      continue;
    }
    if(a[r].S == 0){
      r--;
      continue;
    }
    ll temp = min(a[l].S, a[r].S);
    a[l].S -= temp;
    a[r].S -= temp;
    res = max(res, a[l].F + a[r].F);
  }

  cout<<res<<"\n";
}

int main(){
  cin.tie(0); ios_base::sync_with_stdio(0);

  freopen("pairup.in", "r", stdin);
  freopen("pairup.out", "w", stdout);
  
  int t = 1;
  // cin>>t;
  while(t--) f();
  return 0;
}