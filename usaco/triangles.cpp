#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define sz(x) int((x).size())
#define debug(x) cerr<<#x<<": "<<(x)<<"\n"

void f(){
  int n;
  cin>>n;
  int x[n], y[n];
  for(int i = 0;i<n;i++){
    cin>>x[i]>>y[i];
  }
  int res = -1;
  for(int i = 0;i<n;i++){
    for(int j = 0;j<n;j++){
      for(int k = 0;k<n;k++){
        if(y[i] == y[j] && x[i] == x[k]){
          int area = abs(x[i] - x[j]) * abs(y[k] - y[i]);
          res = max(res, area);
        }
      }
    }
  }
  cout<<res<<"\n";
}

int main(){
  
  ios_base::sync_with_stdio(0); cin.tie(0);
  freopen("triangles.in", "r", stdin);
  freopen("triangles.out", "w", stdout);
  int t = 1;
  // cin>>t;
  while(t--) f();
  
  return 0;
}