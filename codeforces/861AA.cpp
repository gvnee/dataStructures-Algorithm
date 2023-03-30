#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define debug(x) cerr<<#x<<": "<<(x)<<"\n"

const int MOD = int(1e9) + 7;
double PI = atan(1)*4;
int temp;

int findDif(int a){
  int mn = INT_MAX;
  int mx = INT_MIN;
  while(a>0){
    int cur = a%10;
    mn = min(mn, cur);
    mx = max(mx, cur);
    a /= 10;
  }
  return mx - mn;
}

void f(){
  int l, r;
  cin>>l>>r;
  int mx = -1;
  int res = 0;
  for(int i = l;i<=r;i++){
    int cur = findDif(i);
    if(cur == 9){
      cout<<i<<"\n";
      return;
    }
    if(cur > mx){
      mx = cur;
      res = i;
    }
  }
  cout<<res<<"\n";
}

int main(){
  
  ios_base::sync_with_stdio(false); cin.tie(nullptr);

  int t = 1;
  cin>>t;
  while(t--) f();
  
  return 0;
}