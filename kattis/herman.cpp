#include <bits/stdc++.h>
using namespace std;
using ll = long long;

const int MOD = int(1e9) + 7;
int temp;

double PI = atan(1)*4;

void f(){
  double r;
  cin>>r;
  double euclid = r*r*PI;
  double taxicab = r*r*2;
  printf("%.6f\n%.6f", euclid, taxicab);
  // cout<<euclid<<"\n"<<taxicab<<"\n";
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