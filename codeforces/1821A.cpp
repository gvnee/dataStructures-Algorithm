#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define sz(x) int((x).size())
#define debug(x) cerr<<#x<<": "<<(x)<<"\n"
#define pb push_back

void f(){
  string s;
  cin>>s;
  ll res = 1;
  if(s[0] == '0'){
    cout<<0<<"\n";
    return;
  }
  for(int i = 0;i<sz(s);i++){
    if(s[i] == '?'){
      if(i == 0){
        res *= 9;
      }
      else res *= 10;
    }
  }
  cout<<res<<"\n";
}

int main(){
  ios_base::sync_with_stdio(0); cin.tie(0);
  int t = 1;
  cin>>t;
  while(t--) f();
  return 0;
}