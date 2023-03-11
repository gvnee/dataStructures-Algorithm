#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve(){
  ll n;
  cin>>n;
  ll res = n;
  while(true){
    bool no = false;
    for(int i = n-1;i>1;i--){
      if(res % i != 0){
        res+=n;
        no = true;
        break;
      }
    }
    if(!no){
      cout<<res<<"\n";
      return;
    }
  }
}

int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  #ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  #endif
  int t;
  cin>>t;
  while(t--) solve();
  return 0;
}