#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define sz(x) int((x).size())
#define debug(x) cerr<<#x<<": "<<(x)<<"\n"
#define pb push_back

void f(){
  int a, b;
  char c;
  cin>>a>>c>>b;
  if(c == '+') cout<<a+b;
  else if(c == '-') cout<<a-b;
  else if(c == '*') cout<<a*b;
  else cout<<a/b;
}

int main(){
  cin.tie(0); ios_base::sync_with_stdio(0);
  int t = 1;
  // cin>>t;
  while(t--) f();
  return 0;
}