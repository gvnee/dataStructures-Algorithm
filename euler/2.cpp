#include<bits/stdc++.h>
using namespace std;

#define all(x) x.begin(), x.end()
#define sz(x) int((x).size())
typedef pair<int,int> pi;
typedef long long ll;
#define pb push_back
#define S second
#define F first

const int N = 4000000;
const int MXN = 1e6;

void f(){
  ll dp[MXN] = {};
  dp[0] = 1;
  dp[1] = 2;
  ll res = 2;
  for(int i = 2;i<MXN;i++){
    dp[i] = dp[i-1] + dp[i-2];
    if(dp[i]>N) break;
    if(dp[i] % 2 == 0) res += dp[i];
  }
  cout<<res<<"\n"; 
}

int main(){
  cin.tie(0); ios_base::sync_with_stdio(0);
  int t = 1;
  // cin>>t;
  while(t--) f();
  return 0;
}

// 1 1 2 3 5 8 13 21 34 55 89