#include <bits/stdc++.h>
using namespace std;
using ll = long long;

const int MOD = int(1e9) + 7;
int temp;

void f(){
  string a, b;
  cin>>a>>b;
  if(a.size() >= b.size()) cout<<"go";
  else cout<<"no";
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