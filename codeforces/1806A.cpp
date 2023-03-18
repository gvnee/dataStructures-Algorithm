#include <bits/stdc++.h>
using namespace std;

using ll = long long;

#define debug(x) cerr<<#x<<": "<<(x)<<"\n"

const int MOD = int(1e9) + 7;
double PI = atan(1)*4;
int temp;

void f(){
  int x1, y1, x2, y2;
  cin>>x1>>y1>>x2>>y2;
  if(y1>y2 || x2-x1>y2-y1) cout<<"-1\n";
  else if(x2<x1) cout<<x1-x2+2*(y2-y1)<<"\n";
  else cout<<y2-y1+abs(y2-x2)<<"\n";
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