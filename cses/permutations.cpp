#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int temp;

void solve(){
  int n;
  cin>>n;
  if(n == 1){
    cout<<1;
    return;
  }
  if(n<4){
    cout<<"NO SOLUTION\n";
    return;
  }
  for(int i = 2;i<=n;i+=2){
    cout<<i<<" ";
  }
  for(int i = 1;i<=n;i+=2){
    cout<<i<<" ";
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