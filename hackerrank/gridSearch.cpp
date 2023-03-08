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
  int m, n;
  int r, c;
  while(t--){
    cin>>n>>m;
    int arr[n][m];
    for(int i = 0;i<n;i++){
      for(int j = 0;j<m;j++){
        cin>>arr[i][j];
      }
    }
    cin>>r>>c;
    int small[r][c];
    for(int i = 0;i<n;i++){
      for(int j = 0;j<m;j++){
        cin>>small[i][j];
      }
    }
    for(int i = 0;i<n-r;i++){
      for(int j = 0;j<m-c;j++){
        
      }
    }
  }
  return 0;
}