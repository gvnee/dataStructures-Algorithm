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
  int n, q;
  cin>>n>>q;
  int cur = 2;
  vector<int> p = {1};

  while(sz(p)<n){
    bool prime = true;
    for(int i = 2;i*i<=cur;i++){
      if(cur % i == 0){
        prime = false;
        break;
      }
    }
    if(prime) p.pb(cur);
    cur++;
  }
  
  int dp[q+1] = {};
  for(int i = 1;i<=q;i++) dp[i] = INT_MAX;

  for(int i = 1;i<=q;i++){
    for(int point:p){
      if(i - point < 0) continue;
      dp[i] = min(dp[i], dp[i - point] + 1);
    }
  }

  cout<<dp[q]<<"\n";
}

int main(){
  cin.tie(0); ios_base::sync_with_stdio(0);
  int t = 1;
  cin>>t;
  while(t--) f();
  return 0;
}