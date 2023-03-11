// even odd game
#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int temp;

void solve(){
  int n;
  cin>>n;
  int arr[n];
  for(int i = 0;i<n;i++){
    cin>>arr[i];
  }
  sort(arr, arr+n);
  reverse(arr, arr+n);
  ll a = 0;
  for(int i = 0;i<n;i++){
    if(i%2 == 0){
      if(arr[i]%2==0) a += arr[i];
    } else {
      if(arr[i]%2==1) a-= arr[i];
    }
  }
  if(a > 0) cout<<"Alice\n";
  else if(a < 0) cout<<"Bob\n";
  else cout<<"Tie\n";
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