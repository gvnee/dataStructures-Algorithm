#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define sz(x) int((x).size())
#define pb push_back

void f(){
  int n, k;
  cin>>n>>k;
  int res = INT_MAX;
  int a;
  int o = 0;
  ll p = 1;
  for(int i = 0;i<n;i++){
    cin>>a;
    p *= a;
    if(a == 1) o++;
    for(int j = 1;j<=20;j++){
      if(j % k || j<a) continue;
      res = min(res, abs(j-a));
    }
  }
  if(p % k==0) cout<<"0\n";
  else if(k == 4 && o > 1) cout<<min(2, res)<<"\n";
  else cout<<res<<"\n";
}

int main(){
  cin.tie(0); ios_base::sync_with_stdio(0);
  int t = 1;
  cin>>t;
  while(t--) f();
  return 0;
}