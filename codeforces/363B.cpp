// Fence
#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int temp;

void solve(){
  ll n, k;
  cin>>n>>k;
  ll a[n];
  for(int i = 0;i<n;i++){
    cin>>a[i];
  }
  ll cur = 0;
  for(int i = 0;i<k;i++){
    cur += a[i];
  }
  ll mi = cur;
  int index = 1;
  for(int i = 1;i<=n-k;i++){
    cur -= a[i-1];
    cur += a[i+k-1];
    if(cur < mi){
      mi = cur;
      index = i+1;
    }
  }
  cout<<index<<"\n";
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