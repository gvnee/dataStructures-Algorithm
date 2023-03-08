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
  int l = 0, r = 0;
  int res = 0;
  while(l<n && r<n){
    if(arr[r] - arr[l] == k){
      res++;
      r++;
    }
    else if(arr[r] - arr[l] < k) r++;
    else l++;
  }
  cout<<res<<"\n";
  return 0;
}