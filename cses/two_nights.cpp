#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int temp;

void solve(){
  int n;
  cin>>n;
  for(int i = 1;i<=n;i++){
    ll a = i*i;
    ll res = a*(a-1)/2;
    if(i>2){
      res -= 4  * (i-1) * (i-2);
    }
    cout<<res<<"\n";
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