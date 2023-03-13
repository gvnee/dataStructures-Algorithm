#include <bits/stdc++.h>
using namespace std;
using ll = long long;

const int MOD = int(1e9) + 7;
int temp;

double PI = atan(1)*4;

void f(){
  double r, c;
  cin>>r>>c;
  double S = r*r*PI;
  double s = (r-c)*(r-c)*PI;
  double res = (S-s)*100/S;
  printf("%.6f", 100 - res);
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