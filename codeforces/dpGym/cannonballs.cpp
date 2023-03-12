#include <bits/stdc++.h>
using namespace std;
using ll = long long;

const int MOD = int(1e9) + 7;
#define pb push_back;
int temp;
const int MX = 300000;
vector<ll> p;
ll dp[MX+1];

void preProcess(){
  p.push_back(0);
  p.push_back(1);
  for(int i = 2;i<10000;i++){
    p.push_back(p.back() + i*(i+1)/2);
    if(p.back() >= MX) break;
  }
  dp[0] = 0;
  for(int i = 1;i<=MX;i++){
    dp[i] = INT_MAX;
    for(auto b:p){
      if(i - b >= 0){
        dp[i] = min(dp[i-b]+1, dp[i]);
      }
    }
  }
}

void f(){
  ll n;
  cin>>n;
  cout<<dp[n]<<"\n";
}

int main(){
  
  ios_base::sync_with_stdio(false); cin.tie(nullptr);
  #ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  #endif

  int t = 1;
  cin>>t;
  preProcess();
  while(t--){
    f();
  }
  
  return 0;
}