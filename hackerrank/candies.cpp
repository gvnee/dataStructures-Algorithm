#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  #ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  #endif
  int n;
  cin>>n;
  int arr[n];
  ll res = 1;
  int candy = 1;
  for(int i = 0;i<n;i++){
    cin>>arr[i];
    if(i==0) continue;
    if(arr[i]<=arr[i-1]){
      if(candy>1) candy--;
    }
    else candy = 1;
    res += candy;
  }
  cout<<res<<"\n";
  return 0;
}