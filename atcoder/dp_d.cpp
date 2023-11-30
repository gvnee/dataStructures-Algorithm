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
  int n, w; cin>>n>>w;
  vector<pi> a(n);
  for(int i = 0;i<n;i++){
    int w, v; cin>>w>>v;
    a[i] = {w, v};
  }
  sort(all(a));
  ll dp[w+1] = {}, res = 0;

  for(auto [c, v]:a){
    for(int i = 1;i<=w;i++){
      if(i-c < 0) break;
      dp[i] = max(dp[i], dp[i-c] + v);
      res = max(dp[i], res);
    }
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