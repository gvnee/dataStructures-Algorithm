#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define sz(x) int((x).size())
#define debug(x) cerr<<#x<<": "<<(x)<<"\n"
#define pb push_back

void f(){
  float a, b;
  cin>>a>>b;
  printf("floor %.0f / %.0f = %.0f\n", a, b, floor(a/b));
  printf("ceil %.0f / %.0f = %.0f\n", a, b, ceil(a/b));
  printf("round %.0f / %.0f = %.0f\n", a, b, round(a/b));

}

int main(){
  cin.tie(0); ios_base::sync_with_stdio(0);
  int t = 1;
  // cin>>t;
  while(t--) f();
  return 0;
}