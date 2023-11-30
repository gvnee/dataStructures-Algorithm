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
  int n, k; cin>>n>>k;
  int a[n], dp[n] = {};
  for(int i = 0;i<n;i++) cin>>a[i];
  for(int i = 1;i<n;i++){
    dp[i] = INT_MAX;
    for(int j = 1;j<=k;j++){
      if(i-j<0) break;
      dp[i] = min(dp[i], dp[i-j] + abs(a[i] - a[i-j]));
    }
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