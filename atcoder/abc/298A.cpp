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
  int o = 0, x = 0;
  for(char c:s){
    if(c == 'o') o++;
    else if(c == 'x') x++;
  }
  if(o > 0 && x == 0) cout<<"Yes\n";
  else cout<<"No\n";
}

int main(){
  ios_base::sync_with_stdio(0); cin.tie(0);
  int t = 1;
  // cin>>t;
  while(t--) f();
  return 0;
}