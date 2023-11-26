#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define sz(x) int((x).size())
#define pb push_back
#define S second

void f(){
  int n;
  cin>>n;
  int a[n+2], pre[n+2] = {}, suf[n+2] = {};
  for(int i = 1;i<=n;i++){
    cin>>a[i];
    pre[i] = max(pre[i-1], a[i]+n-i);
  }
  for(int i = n;i>=1;i--){
    suf[i] = max(suf[i+1], a[i]+i-1);
  }
  int res = INT_MAX;
  for(int i = 1;i<=n;i++){
    res = min(res, max({a[i], pre[i-1], suf[i+1]}));
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