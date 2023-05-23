#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define sz(x) int((x).size())
#define debug(x) cerr<<#x<<": "<<(x)<<"\n"
#define pb push_back

void f(){
  int n;
  cin>>n;
  int a[n+1][n+1];
  pair<int, int> v[n+1][n+1];
  int two = 0, five = 0;
  for(int i = 1;i<=n;i++){
    for(int j = 1;j<=n;j++){
      cin>>a[i][j];
      int t = 0;
      int f = 0;
      while(a[i][j] % 5 == 0){
        f++;
        a[i][j] /= 5;
      }
      while(a[i][j] % 2 == 0){
        t++;
        a[i][j] /= 2;
      }
      two+=t;
      five+=f;
      v[i][j] = {t, f};
    }
  }
  int dp[n+1][n+1] = {};
  for(int i = 1;i<=n;i++){
    for(int j = 1;j<=n;j++){
      if(two <= five) dp[i][j] = v[i][j].first;
      else dp[i][j] = v[i][j].second;
    }
  }
  char path[n+1][n+1];
  for(int i = 1;i<=n;i++){
    for(int j = 1;j<=n;j++){
      if(dp[i-1][j] < dp[i][j-1]){
        dp[i][j] += dp[i-1][j];
        path[i][j] = 'U';
      }
      else{
        dp[i][j] += dp[i][j-1];
        path[i][j] = 'L';
      }
    }
  }

  for(int i = 1;i<=n;i++){
    path[i][1] = 'l';
    path[1][i] = 'u';
  }
  
  int i = n, j = n;
  vector<char> res;
  while(i > 1 || j > 1){
    if(path[i][j] == 'U' || path[i][j] == 'l'){
      res.pb('D');
      i--;
    }
    else{
      res.pb('R');
      j--;
    }
  }
  cout<<dp[n][n]<<'\n';
  reverse(res.begin(), res.end());
  for(char c:res) cout<<c;
  cout<<'\n';
}

int main(){
  ios_base::sync_with_stdio(0); cin.tie(0);
  int t = 1;
  // cin>>t;
  while(t--) f();
  return 0;
}