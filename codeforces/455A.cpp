// Boredom
#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define N 100005
ll freq[N] = {0}, dp[N];

void solve(){
  int n;
  cin>>n;
  int temp;
  for(int i = 0;i<n;i++){
    cin>>temp;
    freq[temp]++;
  }
  dp[0] = 0;
  dp[1] = freq[1];
  for(int i = 2;i<=N;i++){
    dp[i] = max(dp[i-1], dp[i-2] + freq[i] * i);
  }
  cout<<dp[N]<<"\n";
}

int main(){
  
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  #ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  #endif

  int t = 1;
  // cin>>n;
  while(t--) solve();
  
  return 0;
}