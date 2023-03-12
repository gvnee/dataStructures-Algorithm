#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int temp;

int bigDigit(int number){
  int digit = 0;
  while(number > 0){
    int d = number%10;
    number /= 10;
    digit = max(d, digit);
  }
  return digit;
}

void lmao(){
  int n;
  cin>>n;
  ll dp[n+1];
  dp[0] = 0;
  for(int i = 1;i<=n;i++){
    dp[i] = dp[i - bigDigit(i)] + 1;
  }
  cout<<dp[n];
}

int main(){
  
  ios_base::sync_with_stdio(false); cin.tie(nullptr);
  #ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  #endif

  int t = 1;
  // cin>>t;
  while(t--) lmao();
  
  return 0;
}