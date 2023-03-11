// Cards for Friends
#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int temp;

void solve(){
  int w, h, n;
  cin>>w>>h>>n;
  int pieces = 1;
  while(true){
    if(pieces >= n){
      cout<<"YES"<<"\n";
      return;
    }
    if(w%2 != 0 && h%2 != 0){
      cout<<"NO"<<"\n";
      return;
    }
    if(w % 2 == 0){
      w /= 2;
      pieces *= 2;
    }
    if(h % 2 == 0){
      h /= 2;
      pieces *= 2;
    }
  }
}

int main(){
  
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  #ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  #endif

  int t = 1;
  cin>>t;
  while(t--) solve();
  
  return 0;
}