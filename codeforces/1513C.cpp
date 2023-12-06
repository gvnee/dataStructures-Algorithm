#include<bits/stdc++.h>
using namespace std;

#define all(x) x.begin(), x.end()
#define sz(x) int((x).size())
typedef pair<int,int> pi;
typedef long long ll;
#define pb push_back
#define S second
#define F first

const int MXM = 2e5;
const int MOD = 1e9+7;
ll dp[MXM+1] = {};

void precompute(){
  ll dig[10] = {};
  dig[0] = 1;
  dig[1] = 1;
  dp[0] = 2;
  for(int i = 1;i<=MXM;i++){
    ll nine = dig[9];
    for(int j = 9;j>0;j--){
      dig[j] = dig[j-1];
    }
    dig[0] = nine;
    dig[1] += nine;
    dig[1] %= MOD;

    for(int j = 0;j<=9;j++){
      dp[i] += dig[j];
      dp[i] %= MOD;
    }
  }
}

void f(){
  string n;
  int m; cin>>n>>m;
  ll res = 0;
  for(char c:n){
    int cur = 10 - (c-'0');
    if(m-cur < 0) res+=1;
    else res += dp[m - cur];
    res %= MOD;
  }
  cout<<res<<"\n";
}

int main(){
  cin.tie(0); ios_base::sync_with_stdio(0);
  precompute();

  int t = 1;
  cin>>t;
  while(t--) f();
  return 0;
}