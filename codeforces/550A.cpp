#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define sz(x) int((x).size())
#define pb push_back

void f(){
  string s;
  cin>>s;
  for(int i = 0;i<sz(s)-1;i++){
    if(s.substr(i, 2) == "AB"){
      for(int j = i+2;j<sz(s)-1;j++){
        if(s.substr(j, 2) == "BA"){
          cout<<"YES\n";
          return;
        }
      }
      if(s[i+2] != 'A') break;
    }
    else if(s.substr(i, 2) == "BA"){
      for(int j = i+2;j<sz(s)-1;j++){
        if(s.substr(j, 2) == "AB"){
          cout<<"YES\n";
          return;
        }
      }
      if(s[i+2] != 'B') break;
    }
  }
  cout<<"NO\n";
}

int main(){
  cin.tie(0); ios_base::sync_with_stdio(0);
  int t = 1;
  // cin>>t;
  while(t--) f();
  return 0;
}