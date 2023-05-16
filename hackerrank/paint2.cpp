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
  cin>>s;
  vector<pair<int, int>> v;
  int cur = -1;
  int curc = 0;
  for(char c:s){
    c -= '0';
    if(cur == -1){
      cur = c;
      curc = 1;
    }
    else if(c == cur){
      curc++;
    }
    else{
      v.pb({cur, curc});
      cur = c;
      curc = 1;
    }
  }
  v.pb({cur, curc});
  int res = 0;
  for(int i = 0;i<sz(v)-2;i++){
    int loc = 0;
    if(v[i].first == v[i+2].first){
      loc += v[i].second + v[i+1].second + v[i+2].second;
    }
    else{
      loc += max(v[i].second + v[i+1].second, v[i+1].second + v[i+2].second);
    }
    res = max(res, loc);
  }
  if(sz(v) < 3){
    int total = 0;
    for(auto u:v) total += u.second;
    cout<<total<<"\n";
    return;
  }
  cout<<res<<'\n';
}

int main(){
  ios_base::sync_with_stdio(0); cin.tie(0);
  int t = 1;
  // cin>>t;
  while(t--) f();
  return 0;
}