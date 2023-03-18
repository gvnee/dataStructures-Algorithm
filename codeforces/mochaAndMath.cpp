#include <bits/stdc++.h>
using namespace std;

using ll = long long;

#define debug(x) cerr<<#x<<": "<<(x)<<"\n"

const int MOD = int(1e9) + 7;
double PI = atan(1)*4;
int temp;

void f(){
  int n;
  cin>>n;
  int arr[n];
  for(int i = 0;i<n;i++){
    cin>>arr[i];
    if(i>0){
      arr[i] &= arr[i-1];
    }
  }
  // for(int i = 0;i<n;i++) cout<<arr[i]<<" ";
  // cout<<"\n";
  cout<<arr[n-1]<<"\n";
}

int main(){
  
  ios_base::sync_with_stdio(false); cin.tie(nullptr);
  #ifndef ONLINE_JUDGE
    freopen("input.in", "r", stdin);
  #endif

  int t = 1;
  cin>>t;
  while(t--) f();
  
  return 0;
}