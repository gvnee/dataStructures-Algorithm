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
  ll res = 0;
  ll cur = 0;
  bool h = false, o = false;
  for(char c:s){
    if(c == 'o'){
      o = true;
      cur++;
    }
    else{
      h = true;
      cur = 0;
    }
    res = max(res, cur);
  }
  if(!h || !o) cout<<-1<<"\n";
  else cout<<res<<"\n";
}

int main(){
  ios_base::sync_with_stdio(0); cin.tie(0);
  int t = 1;
  // cin>>t;
  while(t--) f();
  return 0;
}