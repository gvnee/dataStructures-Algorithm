#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define sz(x) int((x).size())
#define debug(x) cerr<<#x<<": "<<(x)<<"\n"
#define pb push_back

void f(){
  int n, q;
  cin>>n>>q;
  int a[n];
  for(int i = 0;i<n;i++){
    cin>>a[i];
  }
  int cost[n];
  for(int i = 0;i<n;i++) cost[i] = INT_MAX;
  for(int i = 0;i<n;i++){
    for(int j = 1;j<n;j++){
      if(cost[i] < j) break;
      if(i - j >= 0) cost[i] = min(cost[i], j + a[i-j]);
      if(i + j < n) cost[i] = min(cost[i], j + a[i+j]);
      if(i-j < 0 && i + j >=n) break;
    }
  }
  int op, k, x;
  while(q--){
    cin>>op>>k;
    k--;
    if(op == 1){
      cin>>x;
      a[k] = x;
      for(int i = 0;i<n;i++){
        if(i == k) continue;
        cost[i] = min(cost[i], abs(i - k) + x);
      }
    }
    else{
      cout<<cost[k]<<"\n";
    }
  }
}

int main(){
  ios_base::sync_with_stdio(0); cin.tie(0);
  int t = 1;
  // cin>>t;
  while(t--) f();
  return 0;
}