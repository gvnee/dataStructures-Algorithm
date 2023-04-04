#include <bits/stdc++.h>
using namespace std;
using ll = long long;

const int MOD = int(1e9) + 7;
double PI = atan(1)*4;
#define debug(x) cerr<<#x<<": "<<(x)<<"\n"
int temp;

void f(){
  int n;
  cin>>n;
  int arr[n];
  for(int i = 0;i<n;i++) cin>>arr[i];
  sort(arr, arr+n);
  int cur = -1;
  int res = 0;
  for(int i = 0;i<n;i++){
    if(arr[i] != cur){
      cur = arr[i];
      res++;
    }
  }
  cout<<res<<"\n";
}

int main(){
  
  ios_base::sync_with_stdio(false); cin.tie(nullptr);

  int t = 1;
  // cin>>t;
  while(t--) f();
  
  return 0;
}