#include <bits/stdc++.h>
using namespace std;
using ll = long long;

const int MOD = int(1e9) + 7;
int temp;

void f(){
  int h, m;
  cin>>h>>m;
  if(m-45<0){
    m -= 45;
    m += 60;
    if(h - 1 < 0){
      h = 23;
    }
    else h--;
  }
  else {
    m -= 45;
  }
  cout<<h<<" "<<m;
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