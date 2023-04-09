#include <bits/stdc++.h>
using namespace std;

using ll = long long;

#define debug(x) cerr<<#x<<": "<<(x)<<"\n"

const int MOD = int(1e9) + 7;
double PI = atan(1)*4;
int temp;

void f(){
  int l, r;
  scanf("%2d%2d", &l, &r);

  if(l <= 12 && l>0 && r <= 12 && r>0) cout<<"AMBIGUOUS\n";
  else if(l<=12 && l>0) cout<<"MMYY\n";
  else if(r<=12 && r>0) cout<<"YYMM\n";
  else cout<<"NA";
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