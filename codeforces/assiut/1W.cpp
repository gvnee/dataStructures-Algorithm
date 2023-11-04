#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define sz(x) int((x).size())
#define debug(x) cerr<<#x<<": "<<(x)<<"\n"
#define pb push_back

void f(){
  int a, b, c;
  char o, e;
  cin>>a>>o>>b>>e>>c;
  int res = 0;

  if(o == '+') res = a+b;
  else if(o == '-') res = a-b;
  else res = a*b;
  
  if(res == c) cout<<"Yes\n";
  else cout<<res<<"\n";
}

int main(){
  cin.tie(0); ios_base::sync_with_stdio(0);
  int t = 1;
  // cin>>t;
  while(t--) f();
  return 0;
}