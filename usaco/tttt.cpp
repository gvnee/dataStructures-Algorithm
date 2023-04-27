#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define sz(x) int((x).size())
#define debug(x) cerr<<#x<<": "<<(x)<<"\n"

const int MOD = int(1e9) + 7;
double PI = atan(1)*4;
int temp;

void f(){
  string s[3];
  set<char> f;
  for(int i = 0;i<3;i++){
    cin>>s[i];
  }
  int res1 = 0;
  int res2 = 0;

  //rows
  for(int i = 0;i<3;i++){
    for(char c:s[i]){
      f.insert(c);
    }
    if(sz(f) == 2) res2++;
    else if(sz(f) == 1) res1++;
    f.clear();
  }

  //diagnal 1
  for(int i = 0;i<3;i++){
    for(int j = 0;j<3;j++){
      if(i == j) f.insert(s[i][j]);
    }
  }
  if(sz(f) == 2) res2++;
  else if(sz(f) == 1) res1++;
  f.clear();

  //diagnal 2
  for(int i = 0;i<3;i++){
    for(int j = 0;j<3;j++){
      if(i + j == 2) f.insert(s[i][j]);
    }
  }
  if(sz(f) == 2) res2++;
  else if(sz(f) == 1) res1++;
  f.clear();

  //columns
  for(int i = 0;i<3;i++){
    for(int j = 0;j<3;j++){
      f.insert(s[j][i]);
    }
    if(sz(f) == 2) res2++;
    else if(sz(f) == 1) res1++;
    f.clear();
  }

  cout<<res1<<"\n"<<res2<<"\n";
}

int main(){
  
  ios_base::sync_with_stdio(false); cin.tie(nullptr);
  // freopen("tttt.in", "r", stdin);
  // freopen("tttt.out", "w", stdout);
  int t = 1;
  // cin>>t;
  while(t--) f();
  
  return 0;
}