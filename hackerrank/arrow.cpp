#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define sz(x) int((x).size())
#define debug(x) cerr<<#x<<": "<<(x)<<"\n"
#define pb push_back

int n, m;
string s[2001];

void reset(int i, int j){
  for(int d = 1;d<n;d++){
    if(i - d<0 && i+d>=n) break;
    if(i - d>=0)
      if(s[i-d][j] == 'S'){
        s[i-d][j] = '0';
        reset(i-d, j);
      }
    if(i + d<n)
      if(s[i+d][j] == 'N'){
        s[i+d][j] = '0';
        reset(i+d, j);
      }
  }
  for(int d = 1;d<m;d++){
    if(j - d<0 && j+d>=m) break;
    if(j - d>=0)
      if(s[i][j-d] == 'W'){
        s[i][j-d] = '0';
        reset(i, j-d);
      }
    if(j + d<m)
      if(s[i][j+d] == 'E'){
        s[i][j+d] = '0';
        reset(i, j+d);
      }
  }
}

struct st{
  bool w = false;
  bool s = false;
};

void f(){
  cin>>n>>m;
  for(int i = 0;i<n;i++){
    cin>>s[i];
  }
  vector<st> r(n), c(m);
  for(int i = 0;i<n;i++){
    for(int j = 0;j<m;j++){
      if(s[i][j] == 'E'){
        if(r[i].w) s[i][j] = '0';
      }
      else if(s[i][j] == 'W') r[i].w = true;
      else if(s[i][j] == 'N'){
        if(c[j].s) s[i][j] = '0';
      }
      else if(s[i][j] == 'S') c[j].s = true;
    }
  }

  for(int i = 0;i<n;i++){
    for(int j = 0;j<m;j++){
      if(s[i][j] == '0') reset(i, j);
    }
  }

  int res = 0;
  for(int i = 0;i<n;i++)
    for(int j = 0;j<m;j++)
      if(s[i][j] != '.' && s[i][j] != '0')
        res++;

  cout<<res<<"\n";
  // for(int i = 0;i<n;i++){
  //   cout<<s[i]<<"\n";
  // }
}

int main(){
  ios_base::sync_with_stdio(0); cin.tie(0);
  int t = 1;
  // cin>>t;
  while(t--) f();
  return 0;
}