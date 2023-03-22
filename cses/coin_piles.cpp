#include <bits/stdc++.h>
using namespace std;

using ll = long long;

#define debug(x) cerr<<#x<<": "<<(x)<<"\n"

const int MOD = int(1e9) + 7;
double PI = atan(1)*4;
int temp;

void f(){
  int a, b;
  cin>>a>>b;
  if(2*a-b >= 0 && (2*a-b)%3 == 0 && 2*b-a>=0 && (2*b-a)%3 == 0){
    cout<<"YES\n";
  }
  else cout<<"NO\n";
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