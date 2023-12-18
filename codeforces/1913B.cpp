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
  string s; cin>>s;
  int f[2] = {};
  for(char c:s){
    f[c-'0']++;
  }
  int res = 0;
  int s1 = min(f[1], f[0]);
  int s2 = min(f[1], f[0]);
  string cp = s;
  for(int i = 0;i<sz(cp);i++){
    if(cp[i] == '1' && s1){
      s1--;
      cp[i] = '0';
    }
    else if(cp[i] == '0' && s2){
      s2--;
      cp[i] = '1';
    }
  }
  // cout<<s<<" "<<cp<<"\n";
  for(int i = 0;i<sz(s);i++){
    if(s[i] == cp[i]){
      res = sz(s) - i;
      break;
    }
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