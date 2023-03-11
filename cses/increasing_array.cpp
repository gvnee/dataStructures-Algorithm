#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int temp;

void solve(){
  ll n;
  cin>>n;
  ll arr[n];
  ll res = 0;
  for(int i = 0;i<n;i++){
    cin>>arr[i];
  }
  for(int i = 1;i<n;i++){
    if(arr[i]<arr[i-1]){
      res += arr[i-1] - arr[i];
      arr[i] = arr[i-1];
    }
  }
  cout<<res<<"\n";
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