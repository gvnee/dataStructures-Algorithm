#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define sz(x) int((x).size())
#define debug(x) cerr<<#x<<": "<<(x)<<"\n"
#define pb push_back

void f(){
  int n;
  cin>>n;
  string s;
  vector<int> l, r;
  for(int i = 0;i<n;i++){
    cin>>s;
    string bs = s.substr(1, 15);
    int a = stoi(bs);
    if(s[0] == 'L') l.pb(a);
    else r.pb(a);
  }
  ll res = 0;
  for(int i = 0;i<(1<<15);i++){
    ll cur = sz(l);
    for(int u:l){
      if(__builtin_popcount(i&u) % 2 == 1) cur--;
    }
    for(int u:r){
      if(__builtin_popcount(i&u) % 2 == 1) cur++;
    }
    res = max(res, cur);
  }
  cout<<res<<"\n";
}

int main(){
  ios_base::sync_with_stdio(0); cin.tie(0);
  int t = 1;
  // cin>>t;
  while(t--) f();
  return 0;
}