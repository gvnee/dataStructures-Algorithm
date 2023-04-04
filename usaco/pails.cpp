#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define sz(x) int((x).size())
#define debug(x) cerr<<#x<<": "<<(x)<<"\n"

const int MOD = int(1e9) + 7;
double PI = atan(1)*4;
int temp;

void f(){
  int x, y, m;
  cin>>x>>y>>m;
  int res = 0;

  for(int i = 0;i<=m/x;i++){
    for(int j = 0;j<=m/y;j++){
      if(x * i + y * j <= m){
        res = max(res, x*i + y*j);
      }
    }
  }
  cout<<res<<"\n";
}

int main(){
  
  ios_base::sync_with_stdio(false); cin.tie(nullptr);
  freopen("pails.in", "r", stdin);
  freopen("pails.out", "w", stdout);
  int t = 1;
  // cin>>t;
  while(t--) f();
  
  return 0;
}