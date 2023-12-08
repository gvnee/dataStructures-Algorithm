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
  ll n; cin>>n;
  ll a[n];
  ll res = 0;
  array<pair<ll, int>, 2> dp[n];
  for(int i = 0;i<n;i++){
    cin>>a[i];
  }
  dp[0][0].F = 0;
  dp[0][0].S = 0;
  dp[0][1].F = a[0];
  dp[0][1].S = 1;
  for(int i = 1;i<n;i++){
    dp[i][0].F = max(dp[i-1][0].F, dp[i-1][1].F);
    
  }
}

int main(){
  cin.tie(0); ios_base::sync_with_stdio(0);
  int t = 1;
  cin>>t;
  while(t--) f();
  return 0;
}