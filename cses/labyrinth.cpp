#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define sz(x) int((x).size())
#define debug(x) cerr<<#x<<": "<<(x)<<"\n"
#define pb push_back

const int mxn = 1e4;
int n, m;
string a[mxn];

bool valid(int i, int j){
  return i>=0&&j>=0&&i<n&&j<m&&(a[i][j]=='.'||a[i][j]=='B');
}
bool visited[mxn][mxn] = {};

void dfs(int i, int j){

  
}

void f(){
  cin>>n>>m;
  for(int i = 0;i<n;i++)
    cin>>a[i];
  
  for(int i = 0;i<n;i++){
    for(int j = 0;j<m;j++){
      if(valid(i, j-1)) dfs(i, j-1);
      if(valid(i, j+1)) dfs(i, j+1);
      if(valid(i-1, j)) dfs(i-1, j);
      if(valid(i+1, j)) dfs(i+1, j);
    }
  }
  
}

int main(){
  ios_base::sync_with_stdio(0); cin.tie(0);
  int t = 1;
  // cin>>t;
  while(t--) f();
  return 0;
}