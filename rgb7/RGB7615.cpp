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
  int n;
  cin>>n;
  int a[n];
  for(int i = 0;i<n;i++){
    cin>>a[i];
  }
  sort(a, a+n);
  int dp[n] = {};
  dp[1] = a[1] - a[0];
  dp[2] = dp[1] + a[2] - a[1];
  for(int i = 3;i<n;i++){
    dp[i] = a[i] - a[i-1] + min(dp[i-1], dp[i-2]);
  }
  cout<<dp[n-1]<<"\n";
}

int main(){
  cin.tie(0); ios_base::sync_with_stdio(0);
  int t = 1;
  // cin>>t;
  while(t--) f();
  return 0;
}