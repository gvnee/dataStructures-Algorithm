#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  #ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  #endif
  int q;
  cin>>q;
  while(q--){
    int n, k;
    cin>>n>>k;
    int arr[n], arr2[n];
    for(int i = 0;i<n;i++){
      cin>>arr[i];
    }
    sort(arr, arr+n);
    for(int i = 0;i<n;i++){
      cin>>arr2[i];
    }
    sort(arr2, arr2+n);
    bool yes = true;
    for(int i = 0;i<n;i++){
      if(arr[i] + arr2[n-i-1] < k){
        cout<<"NO\n";
        yes = false;
        break;
      }
    }
    if(yes) cout<<"YES\n";
  }
  return 0;
}