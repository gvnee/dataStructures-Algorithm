#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define sz(x) int((x).size())
#define pb push_back

const int MXN = 1e9+1;

void f(){
  ll x;
  cin>>x;
  if(x<11) cout<<"NO\n";
  else if(x<111){
    if(x % 11 == 0) cout<<"YES\n";
    else cout<<"NO\n";
  }
  else{
    x -= x/111 * 111;
    if(x % 11 == 0) cout<<"YES\n";
    else cout<<"NO\n";
  }
}

int main(){
  cin.tie(0); ios_base::sync_with_stdio(0);
  int t = 1;
  cin>>t;
  while(t--) f();
  return 0;
}