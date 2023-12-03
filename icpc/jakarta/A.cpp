#include<bits/stdc++.h>
using namespace std;

#define all(x) x.begin(), x.end()
#define sz(x) int((x).size())
typedef pair<int,int> pi;
typedef long long ll;
#define pb push_back
#define S second
#define F first

string s[3];

int si = 0, sj = 0;

string res = "CCC";
string cur = "CCC";
void dfs(int i, int j, int l){
  if(l>0 && i == si && j == sj){
    return;
  }
  cur[l] = s[i][j];
  if(l == 2){
    // cout<<cur<<"\n";
    res = min(res, cur);
    return;
  }
  if(i!= 0 && j != 0) dfs(i-1, j-1, l+1);
  if(i!= 0)           dfs(i-1, j,   l+1);
  if(i!= 0 && j != 2) dfs(i-1, j+1, l+1);
  if(         j != 2) dfs(i,   j+1, l+1);
  if(i!= 2 && j != 2) dfs(i+1, j+1, l+1);
  if(i!= 2)           dfs(i+1, j,   l+1);
  if(i!= 2 && j != 0) dfs(i+1, j-1, l+1);
  if(         j != 0) dfs(i,   j-1, l+1);
}

void f(){
  for(int i = 0;i<3;i++) cin>>s[i];

  for(int i = 0;i<3;i++){
    for(int j = 0;j<3;j++){
      si = i, sj = j;
      dfs(i, j, 0); 
      cur = "CCC";
    }
  }
  cout<<res<<"\n";
}

int main(){
  cin.tie(0); ios_base::sync_with_stdio(0);
  int t = 1;
  // cin>>t;
  while(t--) f();
  return 0;
}