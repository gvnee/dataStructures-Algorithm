#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define sz(x) int((x).size())
#define debug(x) cerr<<#x<<": "<<(x)<<"\n"
#define pb push_back

void f(){
  string s;
  cin>>s;
  sort(s.begin(), s.end());
  vector<string> res;
  do{
    res.pb(s);
  }while(next_permutation(s.begin(), s.end()));
  cout<<sz(res)<<"\n";
  for(auto x:res) cout<<x<<"\n";
}

int main(){
  ios_base::sync_with_stdio(0); cin.tie(0);
  int t = 1;
  // cin>>t;
  while(t--) f();
  return 0;
}