#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define sz(x) int((x).size())
#define debug(x) cerr<<#x<<": "<<(x)<<"\n"
#define pb push_back

void f(){
  string s;
  cin>>s;
  char prev = ' ';
  for(char c:s){
    if(c == '.'){
      if(prev == '-'){
        cout<<1;
        prev = ' ';
      }
      else{
        cout<<0;
        prev = '.';
      }
    }
    else{
      if(prev == '-'){
        cout<<2;
        prev = ' ';
      }
      else{
        prev = '-';
      }
    }
  }
  cout<<"\n";
}

int main(){
  cin.tie(0); ios_base::sync_with_stdio(0);
  int t = 1;
  // cin>>t;
  while(t--) f();
  return 0;
}