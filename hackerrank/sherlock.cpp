#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  #ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  #endif
  int t;
  cin>>t;
  int n;
  while(t--){
    cin>>n;
    int arr[n];
    ll sum = 0;
    for(int i = 0;i<n;i++){
      cin>>arr[i];
      sum+=arr[i];
    }
    ll cur = 0;
    bool yes = false;
    for(int i = 0;i<n;i++){
      sum-=arr[i];
      if(i != 0) cur+=arr[i-1];
      if(cur==sum){
        cout<<"YES\n";
        yes = true;
        break;
      }
    }
    if(!yes) cout<<"NO\n";
  }
  return 0;
}