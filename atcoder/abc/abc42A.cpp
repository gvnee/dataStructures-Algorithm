#include <bits/stdc++.h>
using namespace std;
using ll = long long;

const int MOD = int(1e9) + 7;
double PI = atan(1)*4;
int temp;

void f(){
  int a[3];
  cin>>a[0]>>a[1]>>a[2];
  sort(a, a+3);
  if(a[0] == 5 && a[1] == 5 && a[2] == 7) cout<<"YES";
  else cout<<"NO";
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