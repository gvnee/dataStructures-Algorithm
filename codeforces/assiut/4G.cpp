#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define sz(x) int((x).size())
#define pb push_back

void f(){
  string s; cin>>s;
  for(char &c:s){
    if(c == ',') c = ' ';
    else{
      if(isupper(c)) c = tolower(c);
      else c = toupper(c);
    }
  }
  cout<<s<<"\n";
}

int main(){
  cin.tie(0); ios_base::sync_with_stdio(0);
  int t = 1;
  // cin>>t;
  while(t--) f();
  return 0;
}