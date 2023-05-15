#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define sz(x) int((x).size())
#define debug(x) cerr<<#x<<": "<<(x)<<"\n"
#define pb push_back

void f(){
  int n;
  cin>>n;
  vector<pair<int, int>> v;
  int a, b;
  for(int i = 0;i<n;i++){
    cin>>a>>b;
    v.pb({a, 1});
    v.pb({b, -1});
  }
  sort(v.begin(), v.end());
  int cur = 0;
  int res = 0;
  for(auto u:v){
    cur += u.second;
    res = max(cur, res);
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