#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define sz(x) int((x).size())
#define debug(x) cerr<<#x<<": "<<(x)<<"\n"

void f(){
  string s, f;
  cin>>s;
  cin>>f;
  string res;
  for(char c:s){
    res += c;
    if(sz(res) >= size(f) && res.substr(sz(res) - sz(f)) == f){
      res.resize(sz(res) - sz(f));
    }
  }
  cout<<res<<"\n";
}

int main(){
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  freopen("censor.in", "r", stdin);
  freopen("censor.out", "w", stdout);
  f();

  return 0;
}