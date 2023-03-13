#include <bits/stdc++.h>
using namespace std;
using ll = long long;

const int MOD = int(1e9) + 7;
double PI = atan(1)*4;
int temp;

void f(){
  int n;
  cin>>n;
  int arr[n*2][n*2];

  int res = 0;

  for(int i = 0;i<n*2;i++){
    for(int j = 0;j<n*2;j++){
      cin>>arr[i][j];
      // cout<<arr[i][j]<<" \n"[j == n*2-1];
    }
  }

  

  for(int i = 0;i<n;i++){
    for(int j = 0;j<n;j++){
      res += max( max(arr[i][n*2-j-1], arr[i][j]), max(arr[n*2-i-1][j], arr[n*2-i-1][n*2-j-1]) );
    }
  }

  cout<<res<<"\n";

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