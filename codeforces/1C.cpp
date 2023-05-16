#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define sz(x) int((x).size())
#define debug(x) cerr<<#x<<": "<<(x)<<"\n"
#define pb push_back

void f(){
  double x1, y1, x2, y2, x3, y3;
  cin>>x1>>y1>>x2>>y2>>x3>>y3;
  double res = (x1*(y2-y3) + x2*(y3-y1) + x3*(y1-y2));
  printf("%.6f", res);
}

int main(){
  ios_base::sync_with_stdio(0); cin.tie(0);
  int t = 1;
  // cin>>t;
  while(t--) f();
  return 0;
}