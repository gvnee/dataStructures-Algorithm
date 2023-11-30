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
  int n; cin>>n;
  int a[n][3], dp[n][3]= {};
  for(int i = 0;i<n;i++){
    for(int j = 0;j<3;j++){
      cin>>a[i][j];
    }
  }
  dp[0][0] = a[0][0];
  dp[0][1] = a[0][1];
  dp[0][2] = a[0][2];
  for(int i = 1;i<n;i++){
    for(int j = 0;j<3;j++){
      int mx = 0;
      for(int k = 0;k<3;k++){
        if(j == k) continue;
        mx = max(mx, dp[i-1][k]);
      }
      dp[i][j] = a[i][j] + mx;
    }
  }

  cout<<max({dp[n-1][0], dp[n-1][1], dp[n-1][2]})<<"\n";
}

int main(){
  cin.tie(0); ios_base::sync_with_stdio(0);
  int t = 1;
  // cin>>t;
  while(t--) f();
  return 0;
}