#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define sz(x) int((x).size())
#define debug(x) cerr<<#x<<": "<<(x)<<"\n"

void f(){
  int a, b;
  cin>>a>>b;
  int mn = min(a, b);
  int mx = max(a, b);
  int res = INT_MAX;
  for(int i = 1;i<=mn;i++){
    if(mn%i!=0) continue;
    for(int j = i;j*j<=mx;j++){
      if(mx%j!=0) continue;
      int temp = mx/j+mn/i+j-1;
      res = min(res, temp);
    }
  }
  cout<<res<<"\n";
}

int main(){
  
  ios_base::sync_with_stdio(0); cin.tie(0);

  int t = 1;
  cin>>t;
  while(t--) f();
  
  return 0;
}