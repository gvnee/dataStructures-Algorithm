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
  ll n, p; cin>>n>>p;
  vector<pair<ll, ll>> v(n);
  for(int i = 0;i<n;i++){
    int a; cin>>a;
    v[i].F = a;
  }
  for(int i = 0;i<n;i++){
    int a; cin>>a;
    v[i].S = a;
  }
  sort(all(v), [&](const auto& a, const auto& b){
    return a.S < b.S;
  });

  ll res = p;
  int cur = 0;
  int r = 0;
  while(r<n-1){
    if(v[cur].S < p){
      res += min(v[cur].F, n-r-1) * v[cur].S;
      r += v[cur].F;
      cur++;
    }
    else{
      res += p * (n-r-1);
      break;
    }
  }

  cout<<res<<"\n";
}

int main(){
  cin.tie(0); ios_base::sync_with_stdio(0);
  int t = 1;
  cin>>t;
  while(t--) f();
  return 0;
}