#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define sz(x) int((x).size())
#define pb push_back

void f(){
  ll a, b, k;
  cin>>a>>b>>k;
  bool x = a%k;
  bool y = b%k;
  x = !x;
  y = !y;
  if(x && y) cout<<"Both";
  else if(x) cout<<"Memo";
  else if(y) cout<<"Momo";
  else cout<<"No One";
}

int main(){
  cin.tie(0); ios_base::sync_with_stdio(0);
  int t = 1;
  // cin>>t;
  while(t--) f();
  return 0;
}