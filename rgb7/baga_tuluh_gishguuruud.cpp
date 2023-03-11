#include<bits/stdc++.h>
using namespace std;
int main(){
  int n;
  cin>>n;
  long long cost[1000], dp[1000];
  for(int i = 1;i<=n;i++){
    cin>>cost[i];
    dp[i] = cost[i];
  }

  for(int i = 3;i<=n;i++){
    dp[i] += min(dp[i-1], dp[i-2]);
  }

  cout<<dp[n]<<"\n";
  
  int index = n;
  stack<int> s;
  while(index > 0){
    s.push(index);
    if(dp[index] - cost[index] == dp[index-1]) index--;
    else index -= 2;
  }
  while(!s.empty()){
    cout<<s.top()<<" ";
    s.pop();
  }
  cout<<"\n";
  return 0;
}