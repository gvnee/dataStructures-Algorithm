#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int temp;

void solve(){
  int n;
  cin>>n;
  ll arr[n];
  for(int i = 0;i<n-1;i++){
    cin>>arr[i];
  }
  sort(arr, arr+n);
  for(int i = 0;i<n;i++){
    if(arr[i] != i+1){
      cout<<i+1<<"\n";
      return;
    }
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