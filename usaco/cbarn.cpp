#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define debug(x) cerr<<#x<<": "<<(x)<<"\n"

const int MOD = int(1e9) + 7;
double PI = atan(1)*4;
int temp;

void f(){
  int n;
  cin>>n;
  int arr[n+1];
  for(int i = 1;i<=n;i++){
    cin>>arr[i];
  }
  int res = INT_MAX;
  for(int i = 1;i<=n;i++){
    int l = 1;
    int cur = 0;
    int index = i;
    while(l < n){
      cur += arr[index] * l;
      l++;
      if(index==n){
        index = 1;
      }
      else index++;
    }
    res = min(res, cur);
  }
  cout<<res<<"\n";
}

int main(){
  
  ios_base::sync_with_stdio(false); cin.tie(nullptr);
  freopen("cbarn.in", "r", stdin);
  freopen("cbarn.out", "w", stdout);
  int t = 1;
  // cin>>t;
  while(t--) f();
  
  return 0;
}