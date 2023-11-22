#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define sz(x) int((x).size())
#define pb push_back

bool single(string s){
  for(int i = 0;i<sz(s);i++){
    if(s[i] == ' ' || s[i] == '\n') continue;
    if(s.substr(i, 2) == "//") return true;
    else return false;
  }
  return true;
}

void f(){
  string s;
  bool openComment = false;
  while(getline(cin, s)){
    if(single(s)) continue;
    for(int i = 0;i<sz(s)-1;i++){
      if(s.substr(i, 2) == "//"){
        break;
      }
      else if(s.substr(i, 2) == "/*"){
        openComment = true;
        break;
      }
      else if(s.substr(i, 2) == "*/"){
        openComment = false;
        i+=2;
      }
      else if(!openComment) cout<<s[i];
      if(i == sz(s)-2) cout<<s[i+1];
    }
    if(sz(s) == 1 && s[0] != ' ' && s[0] != '\n') cout<<s[0]<<"\n";
    else if(!openComment && s.substr(sz(s)-2, 2) != "*/") cout<<"\n";
  }
}

int main(){
  cin.tie(0); ios_base::sync_with_stdio(0);
  int t = 1;
  // cin>>t;
  while(t--) f();
  return 0;
}