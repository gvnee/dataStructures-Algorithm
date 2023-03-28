#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define debug(x) cerr<<#x<<": "<<(x)<<"\n"

const int MOD = int(1e9) + 7;
double PI = atan(1)*4;
int temp;

void f(){
  int a, b, x, y;
  cin>>a>>b>>x>>y;
  int res = min(abs(a-b), abs(a-x) + abs(b-y));
  res = min(res, abs(a-y) + abs(x-b));
  cout<<res<<"\n";
}

int main(){
  
  ios_base::sync_with_stdio(false); cin.tie(nullptr);
  // #ifndef ONLINE_JUDGE
    freopen("teleport.in", "r", stdin);
    freopen("teleport.out", "w", stdout);
  // #endif

  int t = 1;
  // cin>>t;
  while(t--) f();
  
  return 0;
}