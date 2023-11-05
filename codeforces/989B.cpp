#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define sz(x) int((x).size())
#define pb push_back

void f(){
  int n, p, c = 0;
  string s;
  cin>>n>>p>>s;
  for(int i = 0;i<sz(s)-p;i++){
    if(s[i] == s[i+p] && s[i] != '.'){
      c++;
      continue;
    }
    if(s[i] == '.' && s[i+p] == '.'){
      s[i] = '1';
      s[i+p] = '0';
    }
    else if(s[i] == '.'){
      if(s[i+p] == '1') s[i] = '0';
      else s[i] = '1';
    }
    else{
      if(s[i] == '1') s[i+p] = '0';
      else s[i+p] = '1';
    }
  }
  for(char &c:s) if(c == '.') c = '1';
  if(c == n-p) cout<<"NO";
  else cout<<s<<"\n";
}

int main(){
  cin.tie(0); ios_base::sync_with_stdio(0);
  int t = 1;
  // cin>>t;
  while(t--) f();
  return 0;
}