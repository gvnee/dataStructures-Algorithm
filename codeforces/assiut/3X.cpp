#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define sz(x) int((x).size())
#define pb push_back

void f(){
  int n, m;
  cin>>n>>m;
  char a[n+2][m+2];
  for(int i = 0;i<=n+1;i++){
    for(int j = 0;j<=m+1;j++){
      a[i][j] = 'x';
    }
  }
  for(int i = 1;i<=n;i++){
    for(int j = 1;j<=m;j++){
      cin>>a[i][j];
    }
  }
  int x, y;
  cin>>x>>y;
  if(a[x-1][y-1] == 'x' && a[x-1][y] == 'x' &&
          a[x][y-1] == 'x' && a[x+1][y-1] == 'x' &&
          a[x+1][y] == 'x' && a[x+1][y+1] == 'x' &&
          a[x][y+1] == 'x' && a[x-1][y+1] == 'x'){
            cout<<"yes\n";
  }
  else cout<<"no\n";
  
}

int main(){
  cin.tie(0); ios_base::sync_with_stdio(0);
  int t = 1;
  // cin>>t;
  while(t--) f();
  return 0;
}