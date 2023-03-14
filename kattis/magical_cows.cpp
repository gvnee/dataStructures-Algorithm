#include<bits/stdc++.h>
using namespace std;

int main(){
  int c, n, m;
  cin>>c>>n>>m;
  int temp;

  int dp[51][c+1] = {0};

  for(int i = 0;i<n;i++){
    cin>>temp;
    dp[0][temp]++;
  }

  for(int i = 0;i<=50;i++){
    for(int j = 1;j<=c;j++){
      if(j<=c/2){
        dp[i+1][j*2] += dp[i][j];
      }
      else dp[i+1][j] += dp[i][j] * 2;
    }
  }

  int q;
  for(int i = 0;i<m;i++){
    cin>>q;
    int count = 0;
    for(int i = 1;i<=c;i++){
      count += dp[q][i];
    }
    cout<<count<<"\n";
  }

  // for(int i = 0;i<=50;i++){
  //   for(int j = 1;j<=c;j++){
  //     cout<<dp[i][j]<<" \n"[j==c];
  //   }
  // }

  return 0;
}