#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define debug(x) cerr<<#x<<": "<<(x)<<"\n"

const int MOD = int(1e9) + 7;
double PI = atan(1)*4;
int temp;

void f(){
  int n;
  cin>>n;
  int a[n];
  int b[n];
  int c[n];
  for(int i = 0;i<n;i++){
    cin>>a[i]>>b[i]>>c[i];
  }
  int res = 0;
  for(int i = 1;i<=3;i++){
    int curPos = i;
    int curScore = 0;
    for(int j = 0;j<n;j++){
      if(a[j] == curPos){
        curPos = b[j];
      }
      else if(b[j] == curPos){
        curPos = a[j];
      }
      if(c[j] == curPos) curScore++;
    }
    res = max(curScore, res);
  }
  cout<<res<<"\n";
}

int main(){
  
  ios_base::sync_with_stdio(false); cin.tie(nullptr);
  freopen("shell.in", "r", stdin);
  freopen("shell.out", "w", stdout);
  int t = 1;
  // cin>>t;
  while(t--) f();
  
  return 0;
}