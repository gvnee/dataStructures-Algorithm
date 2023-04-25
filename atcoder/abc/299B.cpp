#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define sz(x) int((x).size())
#define debug(x) cerr<<#x<<": "<<(x)<<"\n"
#define pb push_back

void f(){
  ll n, k;
  cin>>n>>k;
  vector<ll> c(n), r(n);
  vector<ll> index;
  for(int i = 0;i<n;i++){
    cin>>c[i];
    if(c[i] == k) index.pb(i);
  }
  ll resIndex, resRank = -1;
  if(index.empty()){
    k = c[0];
    for(int i = 0;i<n;i++){
      if(c[i] == k) index.pb(i);
    }
  }
  for(int i = 0;i<n;i++){
    cin>>r[i];
  }
  for(auto it:index){
    if(r[it] > resRank){
      resRank = r[it];
      resIndex = it;
    }
  }
  cout<<resIndex+1<<"\n";
}

int main(){
  ios_base::sync_with_stdio(0); cin.tie(0);
  int t = 1;
  // cin>>t;
  while(t--) f();
  return 0;
}