#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  #ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  #endif
  int n,k;
  cin>>n>>k;
  int arr[n];
  for(int i = 0;i<n;i++){
    cin>>arr[i];
    arr[i] += k;
  }

  sort(arr, arr+n);
  int res = 0;
  for(int i = 0;i<n/3;i++){
    int index = i*3;
    if(arr[index] <= 5 && arr[index+1] <= 5 && arr[index+2] <= 5)
      res++;
  }
  cout<<res<<"\n";
  return 0;
}