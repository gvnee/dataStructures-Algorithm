// Two buttons
#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int temp;

void solve(){
  int n,m;
  cin>>n>>m;
  int res = 0;
  if(n>=m){
    res = n-m;
    cout<<res<<"\n";
    return;
  }
  while(true){
    if(n < m){
      n *= 2;
      res++;
    }
    res += n - m;
    cout<<res<<"\n";
    return;
  }
}

int main(){
  
  ios_base::sync_with_stdio(false); cin.tie(nullptr);
  #ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  #endif

  int t = 1;
  // cin>>t;
  while(t--) solve();
  
  return 0;
}