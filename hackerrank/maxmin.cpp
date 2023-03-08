#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  #ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  #endif
  int n, k;
  cin>>n>>k;
  int arr[n];
  for(int i = 0;i<n;i++){
    cin>>arr[i];
  }
  sort(arr, arr+n);
  int res = INT_MAX;
  for(int i = k-1;i<n;i++){
    res = min(res, arr[i] - arr[i-k+1]);
  }
  cout<<res<<"\n";
  return 0;
}