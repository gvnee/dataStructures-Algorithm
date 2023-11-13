#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define sz(x) int((x).size())
#define pb push_back

void f(){
  int n, q;
  cin>>n>>q;
  char c;
  int a[n+1][n+1] = {};
  for(int i = 1;i<=n;i++){
    for(int j = 1;j<=n;j++){
      cin>>c;
      a[i][j] = (s[i][j] == '*');
      a[i][j] += a[i][j-1];
    }
  }
  int x1, y1, x2, y2, xl, yb, xr, yt;
  while(q--){
    cin>>y1>>x1>>y2>>x2;
    xl = min(x1, x2);
    xr = max(x1, x2);
    yt = min(y1, y2);
    yb = max(y1, y2);
    ll sum = 0;
    for(int i = yt;i<=yb;i++){
      sum += a[i][xr] - a[i][xl-1];
    }
    cout<<sum<<"\n";
  }
}

int main(){
  cin.tie(0); ios_base::sync_with_stdio(0);
  int t = 1;
  // cin>>t;
  while(t--) f();
  return 0;
}