#include <bits/stdc++.h>
using namespace std;
using ll = long long;

const int MOD = int(1e9) + 7;
int temp;

void f(){
  int n, r;
  cin>>r>>n;
  int arr[n];
  for(int i = 0;i<n;i++){
    cin>>arr[i];
  }
  if(n>=r){
    cout<<"too late";
    return;
  }
  sort(arr, arr+n);
  for(int i = 0;i<r;i++){
    if(arr[i] != i+1){
      cout<<i+1;
      return;
    }
  }
}

int main(){
  
  ios_base::sync_with_stdio(false); cin.tie(nullptr);
  // #ifndef ONLINE_JUDGE
  // freopen("input.in", "r", stdin);
  // #endif

  int t = 1;
  // cin>>t;
  while(t--) f();
  
  return 0;
}