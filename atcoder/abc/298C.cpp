#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define sz(x) int((x).size())
#define debug(x) cerr<<#x<<": "<<(x)<<"\n"
#define pb push_back

const int mod = 998244353;
const string smod = "998244353";
string s = "1";

int conv(string s){
  int a = 0;
  for(int i = sz(s) - 1;i>=0;i--){
    a += s[i] - '0';
    a *= 10;
  }
  assert();
  return a;
}

void add(char a){
  s += a;
  // cout<<s<<"\n";
  int temp = conv(s);
  if(sz(s) > sz(smod)){
    temp %= mod;
    s = to_string(temp);
  }
  else if(sz(s) == sz(smod)){
    bool g = true;
    for(int i = 0;i<sz(s);i++){
      if(s[i] > smod[i]){
        g = true;
        break;
      }
      else if(s[i] < smod[i]){
        g = false;
        break;
      }
    }
    if(g){
      temp %= mod;
      s = to_string(temp);
    }
  }
}

void f(){
  int op;
  cin>>op;
  if(op == 1){
    char a;
    cin>>a;
    add(a);
  }
  else if(op == 2){
    s = s.substr(1, sz(s)+10);
  }
  else{
    cout<<s<<"\n";
  }
}

int main(){
  ios_base::sync_with_stdio(0); cin.tie(0);
  int t;
  cin>>t;
  while(t--) f();
  return 0;
}