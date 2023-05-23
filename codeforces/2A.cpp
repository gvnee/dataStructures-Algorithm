#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define sz(x) int((x).size())
#define debug(x) cerr<<#x<<": "<<(x)<<"\n"
#define pb push_back

void f(){
  int n;
  cin>>n;
  string name;
  int score;
  map<string, int> m, m2;
  int mx = INT_MIN;
  vector<pair<string, int>> v;
  for(int i = 0;i<n;i++){
    cin>>name>>score;
    v.pb({name, score});
    m[name] += score;
  }
  for(auto u:m) mx = max(m[u.first], mx);

  for(auto u:v){
    m2[u.first] += u.second;
    if(m2[u.first] >= mx && m[u.first] == mx){
      cout<<u.first<<"\n";
      return;
    }
  }
}

int main(){
  ios_base::sync_with_stdio(0); cin.tie(0);
  int t = 1;
  // cin>>t;
  while(t--) f();
  return 0;
}