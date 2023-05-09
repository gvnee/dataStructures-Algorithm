#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define sz(x) int((x).size())
#define debug(x) cerr<<#x<<": "<<(x)<<"\n"
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
  ll res = 0;
  for(int j = 0;j<m;j++){
    vector<ll> col(n);
    for(int i = 0;i<n;i++){
      col[i] = a[i][j];
    }
    sort(col.begin(), col.end());
    for(int i = 0;i<n;i++){
      res += col[i] * i + -col[i] * (n-1-i);
    }
  }
  cout<<res<<"\n";
}

int main(){
  ios_base::sync_with_stdio(0); cin.tie(0);
  int t = 1;
  cin>>t;
  while(t--) f();
  return 0;
}