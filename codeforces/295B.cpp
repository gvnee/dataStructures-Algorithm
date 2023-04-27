#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define sz(x) int((x).size())
#define debug(x) cerr<<#x<<": "<<(x)<<"\n"
#define pb push_back

void f(){
  int n;
  cin>>n;
  ll a[n][n];
  for(int i = 0;i<n;i++)
    for(int j = 0;j<n;j++)
      cin>>a[i][j];
  
  int x[n];
  for(int i = 0;i<n;i++){
    cin>>x[i];
    x[i]--;
  }
  ll res[n] = {};
  bool f[n] = {};
  for(int k = n-1;k>=0;k--){
    int curK = x[k];
    f[curK] = true;
    for(int i = 0;i<n;i++){
      for(int j = 0;j<n;j++){
        a[i][j] = min(a[i][j], a[i][curK] + a[curK][j]);
        if(f[i] && f[j]) res[k]+=a[i][j];
      }
    }
  }
  for(int i = 0;i<n;i++) cout<<res[i]<<" ";
}

int main(){
  ios_base::sync_with_stdio(0); cin.tie(0);
  int t = 1;
  // cin>>t;
  while(t--) f();
  return 0;
}