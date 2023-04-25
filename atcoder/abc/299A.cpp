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
  bool opened = false;
  bool closed = false;
  for(char c:s){
    if(c == '|'){
      if(opened) closed = true;
      else opened = true;
    }
    else if(c == '*'){
      if(opened && !closed) cout<<"in\n";
      else cout<<"out\n";
      return;
    }
  }
}

int main(){
  ios_base::sync_with_stdio(0); cin.tie(0);
  int t = 1;
  // cin>>t;
  while(t--) f();
  return 0;
}