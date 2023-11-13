#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define sz(x) int((x).size())
#define pb push_back

void f(){
  int n, q;
  cin>>n>>q;
  int a[n+1][n+1] = {};
  char c;
  for(int i = 1;i<=n;i++){
    for(int j = 1;j<=n;j++){
      cin>>c;
      a[i][j] = c == '*';
      a[i][j] += a[i-1][j] + a[i][j-1] - a[i-1][j-1];
    }
  }
  int y1, x1, y2, x2;
  while(q--){
    cin>>y1>>x1>>y2>>x2;
    cout<<a[y2][x2] - a[y1-1][x2] - a[y2][x1-1] + a[y1-1][x1-1]<<"\n";
  }
}

int main(){
  cin.tie(0); ios_base::sync_with_stdio(0);
  int t = 1;
  // cin>>t;
  while(t--) f();
  return 0;
}