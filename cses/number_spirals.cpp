#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int temp;

void solve(){
  ll x, y, res;
  cin>>x>>y;
  if(x == 1 && y == 1){
    cout<<1<<"\n";
    return;
  }
  if(x>=y)
    if(x % 2 == 0) res = x*x - y + 1;
    else res = (x-1)*(x-1)+y;

  else
    if(y % 2 == 1) res = y*y - x + 1;
    else res = (y-1)*(y-1)+x;

  cout<<res<<"\n";

}

int main(){
  
  ios_base::sync_with_stdio(false); cin.tie(nullptr);
  #ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  #endif

  int t = 1;
  cin>>t;
  while(t--) solve();
  
  return 0;
}