#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define sz(x) int((x).size())
#define debug(x) cerr<<#x<<": "<<(x)<<"\n"

void f(){
  ll a, b;
  cin>>a>>b;
  ll c = 0;
  while(a != b){
    c++;
    if(a>b){
      a -= b;
    }
    else b -= a;
  }
  cout<<c<<"\n";
}

int main(){
  ios_base::sync_with_stdio(0); cin.tie(0);
  int t = 1;
  // cin>>t;
  while(t--) f();
  return 0;
}