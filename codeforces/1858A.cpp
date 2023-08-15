#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define sz(x) int((x).size())
#define debug(x) cerr<<#x<<": "<<(x)<<"\n"
#define pb push_back

void f(){
  int a, b, c;
  cin>>a>>b>>c;
  a += (c%2);

  if(a>b) cout<<"First\n";
  else cout<<"Second\n";
  
}

int main(){
  ios_base::sync_with_stdio(0); cin.tie(0);
  int t = 1;
  cin>>t;
  while(t--) f();
  return 0;
}