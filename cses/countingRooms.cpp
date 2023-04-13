#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

string a[1000];
int n, m;

bool valid(int i, int j){
  return i>=0 && j>=0 && i<n && j<m && a[i][j] == '.';
}

void dfs(int i, int j){
  a[i][j] = '#';
  if(valid(i, j-1)) dfs(i, j-1);
  if(valid(i, j+1)) dfs(i, j+1);
  if(valid(i-1, j)) dfs(i-1, j);
  if(valid(i+1, j)) dfs(i+1, j);
}

int main(){
  cin>>n>>m;
  for(int i = 0;i<n;i++) cin>>a[i];
  int res = 0;
  for(int i = 0;i<n;i++)
    for(int j = 0;j<m;j++)
      if(valid(i, j)) dfs(i, j), res++;
  cout<<res<<"\n";
  return 0;
}