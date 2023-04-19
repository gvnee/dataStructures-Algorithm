#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define sz(x) int((x).size())
#define debug(x) cerr<<#x<<": "<<(x)<<"\n"
#define pb push_back

const int mod = 998244353;
const string smod = "998244353";

string s = "1";

bool isGreater(){
  if(s == smod) return true;
  else if(sz(s) > sz(smod)) return true;
  else if(sz(s) == sz(smod)){
    for(int i = 0;i<sz(s);i++){
      if(s[i] > smod[i]) return true;
      else if(s[i] < smod[i]) return false;
    }
  }
  return false;
}

void f(){
  int op;
  cin>>op;
  if(op == 1){
    char a;
    cin>>a;
    s += a;
  }
  else if(op == 2){
    if(sz(s) == 1) s = "";
    else if(sz(s) > 1)
      s = s.substr(1, sz(s));
  }
  else {
    if(isGreater()){
      ll temp = stol(s);
      temp -= mod;
      s = to_string(temp);
    }
    cout<<s<<"\n";
  }
}

int main(){
  ios_base::sync_with_stdio(0); cin.tie(0);
  int t = 1;
  cin>>t;
  while(t--) f();
  return 0;
}