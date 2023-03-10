#include<bits/stdc++.h>
using namespace std;
int main(){
  int n;
  cin>>n;
  vector<int> coins;
  int a;
  for(int i = 0;i<n;i++){
    cin>>a;
    coins.push_back(a);
  }
  int dp[1000];
  dp[0] = 0;
  int first[1000];
  for(int i = 1;i<100;i++){
    dp[i] = INT_MAX;
    for(auto c : coins){
      if(i - c >= 0 && dp[i-c]+1<dp[i]){
        dp[i] = dp[i-c]+1;
        first[i] = c;
      }
    }
  }
  for(int i = 0;i<100;i++){
    int temp = i;
    while(temp>0){
      cout<<first[temp]<<" ";
      temp -= first[temp];
    }
    cout<<"\n";
  }


  return 0;
}