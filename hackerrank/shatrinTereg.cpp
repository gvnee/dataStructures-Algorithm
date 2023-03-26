#include <bits/stdc++.h>
using namespace std;

#define ll long long

#define debug(x) cerr<<#x<<": "<<(x)<<"\n"

const int MOD = int(1e9) + 7;
double PI = atan(1)*4;
int temp;

ll dp[1500001] = {};

void f(){
  int x, y, x2, y2;
  cin>>x>>y>>x2>>y2;
  if(x == x2 || y == y2 || x == y2 || y == x2) cout<<"YES\n";
  else cout<<"NO\n";
}

int main(){
  
  ios_base::sync_with_stdio(false); cin.tie(nullptr);
  #ifndef ONLINE_JUDGE
    freopen("input.in", "r", stdin);
  #endif

  int t = 1;
  // cin>>t;
  while(t--) f();
  
  return 0;
}