// Long jumps
#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int temp;

ll N = 2*10*10*10*10*10+1;

void solve(){
  int n;
  cin>>n;
  ll dp[n+1] = {0};
  ll overflow = 0;
  ll arr[n+1];
  for(int i = 1;i<=n;i++){
    cin>>temp;
    arr[i] = temp;
    dp[i] = temp;
  }
  for(int i = 1;i<=n;i++){
    if(arr[i] + i > n){
      overflow = max(dp[i], overflow);
    }
    else{
      dp[i+arr[i]] = max(dp[i+arr[i]], arr[i+arr[i]] + dp[i]);
    }
  }
  cout<<overflow<<"\n";
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