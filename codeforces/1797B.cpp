#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define sz(x) int((x).size())
#define debug(x) cerr<<#x<<": "<<(x)<<"\n"

void f(){
  ll n, k;
  cin>>n>>k;
  short int arr[n][n];
  short int r[n][n];
  for(int i = 0;i<n;i++){
    for(int j = 0;j<n;j++){
      cin>>arr[i][j];
      r[n-i-1][j] = arr[i][j];
    }
  }
  ll c = 0;
  for(int i = 0;i<n;i++){
    for(int j = 0;j<n;j++){
      if(arr[i][j] != r[i][j]){
        c++;
        if(c>k){
          cout<<"NO\n";
          return;
        }
      }
    }
  }
  cout<<"YES\n";
}

int main(){
  ios_base::sync_with_stdio(0); cin.tie(0);
  int t = 1;
  cin>>t;
  while(t--) f();
  return 0;
}