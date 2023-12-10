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
  vector<pair<ll, ll>> v(n);
  for(int i = 0;i<n;i++){
    cin>>v[i].F;
    v[i].S = i;
  }
  sort(all(v));

  for(int i = 1;i<n;i++){
    v[i].F += v[i-1].F;
  }
  
  ll res[n] = {};
  ll r[n] = {};
  for(int i = n-1;i>=0;i--){
    res[v[i].S] = i;
    if(i != n-1 && v[i].F >= v[i+1].F - v[i].F){
      r[i] = r[i+1] + 1;
      res[v[i].S] += r[i];
    }
  }
  for(int i = 0;i<n;i++) cout<<res[i]<<" ";
  cout<<"\n";
}

int main(){
  cin.tie(0); ios_base::sync_with_stdio(0);
  int t = 1;
  cin>>t;
  while(t--) f();
  return 0;
}