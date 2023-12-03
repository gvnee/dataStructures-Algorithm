#include<bits/stdc++.h>
using namespace std;

#define all(x) x.begin(), x.end()
#define sz(x) int((x).size())
typedef pair<int,int> pi;
typedef long long ll;
#define pb push_back
#define S second
#define F first

void f(){
  int n, m;
  cin>>n>>m;
  string s[n];
  for(int i = 0;i<n;i++){
    cin>>s[i];
  }
  int res = 0;
  for(int i = 0;i<n;i++){
    for(int j = 0;j<m;j++){
      int mn = INT_MAX;
      if(s[i][j] == '+'){
        int cur = 0;
        for(int k = j-1;k>=0;k--){
          if(s[i][k] == '-') cur++;
          else break;
        }
        mn = min(cur, mn);
        cur = 0;
        for(int k = j+1;k<m;k++){
          if(s[i][k] == '-') cur++;
          else break;
        }
        mn = min(cur, mn);
        cur = 0;
        for(int k = i-1;k>=0;k--){
          if(s[k][j] == '|') cur++;
          else break;
        }
        mn = min(cur, mn);
        cur = 0;
        for(int k = i+1;k<n;k++){
          if(s[k][j] == '|') cur++;
          else break;
        }
        mn = min(cur, mn);
        cur = 0;
        int ii = i-1, jj = j-1;
        while(ii >= 0 && jj >= 0){
          if(s[ii][jj] == '\\') cur++;
          else break;
          ii--, jj--;
        }
        mn = min(cur, mn);
        cur = 0;
        ii = i-1, jj = j+1;
        while(ii >= 0 && jj < m){
          if(s[ii][jj] == '/') cur++;
          else break;
          ii--, jj++;
        }
        mn = min(cur, mn);
        cur = 0;
        ii = i+1, jj = j+1;
        while(ii < n && jj < m){
          if(s[ii][jj] == '\\') cur++;
          else break;
          ii++, jj++;
        }
        mn = min(cur, mn);
        cur = 0;
        ii = i+1, jj = j-1;
        while(ii < n && jj >= 0){
          if(s[ii][jj] == '/') cur++;
          else break;
          ii++, jj--;
        }
        mn = min(cur, mn);
        res = max(res, mn);
      }
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