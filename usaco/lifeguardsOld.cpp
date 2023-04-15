#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define sz(x) int((x).size())
#define debug(x) cerr<<#x<<": "<<(x)<<"\n"

void f(){
  int n;
  cin>>n;
  int a[n], b[n];
  int t[1001] = {};
  for(int i = 0;i<n;i++){
    cin>>a[i]>>b[i];
    for(int j = a[i];j<b[i];j++){
      t[j]++;
    }
  }
  int res = -1;
  for(int i = 0;i<n;i++){
    int cur = 0;
    for(int j = 0;j<=1000;j++){
      if(a[i]<=j && j<b[i]){
        if(t[j]>1) cur++;
      }
      else if(t[j] > 0){
        cur++;
      }
    }
    res = max(res, cur);
  }
  cout<<res<<"\n";
}

int main(){
  
  ios_base::sync_with_stdio(0); cin.tie(0);
  freopen("lifeguards.in", "r", stdin);
  freopen("lifeguards.out", "w", stdout);
  int t = 1;
  // cin>>t;
  while(t--) f();
  
  return 0;
}