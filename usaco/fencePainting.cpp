#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define debug(x) cerr<<#x<<": "<<(x)<<"\n"

const int MOD = int(1e9) + 7;
double PI = atan(1)*4;
int temp;

void f(){
  int a, b;
  cin>>a>>b;
  int c, d;
  cin>>c>>d;
  bool painted[101] = {};
  for(int i = a;i<b;i++){
    painted[i] = true;
  }
    for(int i = c;i<d;i++){
    painted[i] = true;
  }
  int res;
  for(int i = 0;i<=100;i++){
    res += painted[i];
  }
  cout<<res;
}

int main(){
  
  ios_base::sync_with_stdio(false); cin.tie(nullptr);
  // #ifndef ONLINE_JUDGE
    freopen("paint.in", "r", stdin);
    freopen("paint.out", "w", stdout);
  // #endif

  int t = 1;
  // cin>>t;
  while(t--) f();
  
  return 0;
}