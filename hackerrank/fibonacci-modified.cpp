#include <bits/stdc++.h>
using namespace std;
using ll = long long;

const int MOD = int(1e9) + 7;
int temp;
unsigned long long dp[100];
 
void f(){
  int n;
  cin>>dp[1]>>dp[2]>>n;
  for(int i = 3;i<=n;i++){
    dp[i] = dp[i-2] + dp[i-1]*dp[i-1]; 
  }
  cout<<dp[n]<<"\n";
}

int main(){
  
  ios_base::sync_with_stdio(false); cin.tie(nullptr);

  int t = 1;
  // cin>>t;
  while(t--) f();
  
  return 0;
}