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
  vector<int> v[n];
  unordered_map<int, int> m;
  for(int i = 0;i<n;i++){
    int l; cin>>l;
    for(int j = 0;j<l;j++){
      int a; cin>>a;
      v[i].pb(a);
      m[a]++;
    }
  }
  ll res = 0;
  for(auto [b, _]:m){
    unordered_map<int, int> c = m;
    for(int i = 0;i<n;i++){
      bool contains = 0;
      for(int j = 0;j<sz(v[i]);j++){
        if(v[i][j] == b){
          contains = true;
          break;
        }
      }
      if(!contains) continue;

      for(int j = 0;j<sz(v[i]);j++){
        c[v[i][j]]--;
      }
    }
    ll cur = 0;
    for(auto [_, count]:c){
      if(count > 0) cur++;
    }
    res = max(res, cur);
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