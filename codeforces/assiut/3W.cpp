#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define sz(x) int((x).size())
#define pb push_back

void f(){
  int n, m;
  cin>>n>>m;
  int a[n][m];
  for(int i = 0;i<n;i++){
    for(int j = 0;j<m;j++){
      cin>>a[i][j];
    }
  }
  for(int i = 0;i<n;i++){
    for(int j = m-1;j>=0;j--){
      cout<<a[i][j]<<" \n"[j==0];
    }
  }
}

int main(){
  cin.tie(0); ios_base::sync_with_stdio(0);
  int t = 1;
  // cin>>t;
  while(t--) f();
  return 0;
}