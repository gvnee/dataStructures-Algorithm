#include<bits/stdc++.h>
using namespace std;

#define all(x) x.begin(), x.end()
#define sz(x) int((x).size())
typedef pair<int,int> pi;
typedef long long ll;
#define pb push_back
#define S second
#define F first

void f(){
  int n, m; cin>>n>>m;
  int w[n+1], v[n+1];
  for(int i = 1;i<=n;i++){
    cin>>w[i]>>v[i];
  }
  ll dp[m+1] = {};

  for(int i = 1;i<=n;i++){
    for(int j = m;j>=1;j--){
      if(j-w[i] < 0) dp[j] = dp[j];
      else dp[j] = max(dp[j], dp[j-w[i]] + v[i]);
    }
  }

  cout<<dp[m]<<"\n";
}

int main(){
  cin.tie(0); ios_base::sync_with_stdio(0);
  int t = 1;
  // cin>>t;
  while(t--) f();
  return 0;
}