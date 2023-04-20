#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define sz(x) int((x).size())
#define debug(x) cerr<<#x<<": "<<(x)<<"\n"
#define pb push_back
int n;
vector<int> subset;
vector<int> v;
int res = INT_MAX;
ll total = 0;

void search(int k){
  if(k == n){
    if(subset.empty()) return;
    ll cur = 0;
    for(auto x:subset) cur += x;
    ll d = abs(total - cur - cur);
    if(d < res) res = d;
  }
  else{
    search(k+1);
    subset.pb(v[k]);
    search(k+1);
    subset.pop_back();
  }
}

void f(){
  cin>>n;
  int a;
  for(int i = 0;i<n;i++){
    cin>>a;
    v.pb(a);
    total += v[i];
  }
  search(0);
  cout<<res<<"\n";
}

int main(){
  ios_base::sync_with_stdio(0); cin.tie(0);
  int t = 1;
  // cin>>t;
  while(t--) f();
  return 0;
}