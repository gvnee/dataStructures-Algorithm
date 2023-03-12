#include <bits/stdc++.h>
using namespace std;
using ll = long long;

const int MOD = int(1e9) + 7;
int temp;

void f(){
  int x, y;
 cin>>x>>y;
  x = abs(x);
  y = abs(y);
  if(x == y) cout<<x*2<<"\n";
  else cout<<max(x, y)*2-1<<"\n";
}

int main(){
  
  ios_base::sync_with_stdio(false); cin.tie(nullptr);
  #ifndef ONLINE_JUDGE
  freopen("input.in", "r", stdin);
  #endif

  int t = 1;
  cin>>t;
  while(t--) f();
  
  return 0;
}