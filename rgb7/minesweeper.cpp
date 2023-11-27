#include<bits/stdc++.h>
using namespace std;

#define all(x) (x.begin(), x.end())
#define sz(x) int((x).size())
#define pii pair<int, int>
typedef long long ll;
#define pb push_back
#define S second
#define F first

void f(){
  int n, m, q;
  cin>>n>>m>>q;
  int v[n+10][m+10] = {};
  while(q--){
    int a, b;
    cin>>a>>b;
    v[a][b] = -1;
  }

  for(int i = 1;i<=n;i++){
    for(int j = 1;j<=m;j++){
      if(v[i][j] == -1) cout<<'*';
      else{
        int cur = 0;
        cur += v[i-1][j-1] == -1;
        cur += v[i-1][j] == -1;
        cur += v[i-1][j+1] == -1;
        cur += v[i][j+1] == -1;
        cur += v[i+1][j+1] == -1;
        cur += v[i+1][j] == -1;
        cur += v[i+1][j-1] == -1;
        cur += v[i][j-1] == -1;
        cout<<cur;
      }
      if(j<m) cout<<' ';
    }
    cout<<"\n";
  }
  
}

int main(){
  cin.tie(0); ios_base::sync_with_stdio(0);
  int t = 1;
  // cin>>t;
  while(t--) f();
  return 0;
}