#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define sz(x) int((x).size())
#define debug(x) cerr<<#x<<": "<<(x)<<"\n"

void f(){
  int n, d;
  cin>>n>>d;
  int arr[n];
  for(int i = 0;i<n;i++){
    cin>>arr[i];
    if(i == 0) continue;
    if(arr[i] - arr[i-1] <= d){
      cout<<arr[i]<<"\n";
      return;
    }
  }
  cout<<"-1\n";
}

int main(){
  ios_base::sync_with_stdio(0); cin.tie(0);
  int t = 1;
  // cin>>t;
  while(t--) f();
  return 0;
}