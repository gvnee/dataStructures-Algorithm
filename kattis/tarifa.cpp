#include <bits/stdc++.h>
using namespace std;
using ll = long long;

const int MOD = int(1e9) + 7;
int temp;

void f(){
  int x, n;
  cin>>x>>n;
  int res = x;
  while(n--){
    res+=x;
    cin>>temp;
    if(temp>res) res = 0;
    else res -= temp;
  }
  cout<<res;
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