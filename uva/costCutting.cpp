#include<bits/stdc++.h>
using namespace std;

int main(){

  ios_base::sync_with_stdio(0);
  cin.tie(0);
  // freopen("input.in", "r", stdin);
  int t;
  cin>>t;
  int arr[3];
  for(int i = 1;i<=t;i++){
    cin>>arr[0]>>arr[1]>>arr[2];
    sort(arr, arr+3);
    printf("Case %d: %d\n", i, arr[1]);
  }
  
  return 0;
}