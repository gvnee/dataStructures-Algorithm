#include <bits/stdc++.h>
using namespace std;
using ll = long long;

const int MOD = int(1e9) + 7;
int temp;

void f(){
  int x, y;
  cin>>x>>y;
  if(x>0 && y>0)      cout<<1;
  else if(x>0 && y<0) cout<<4;
  else if(x<0 && y<0) cout<<3;
  else if(x<0 && y>0) cout<<2;
}

int main(){
  
  ios_base::sync_with_stdio(false); cin.tie(nullptr);
  // #ifndef ONLINE_JUDGE
  // freopen("input.in", "r", stdin);
  // #endif

  int t = 1;
  // cin>>t;
  while(t--) f();
  
  return 0;
}