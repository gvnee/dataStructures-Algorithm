#include <bits/stdc++.h>
using namespace std;

using ll = long long;

#define debug(x) cerr<<#x<<": "<<(x)<<"\n"

const int MOD = int(1e9) + 7;
double PI = atan(1)*4;
int temp;

void f(){
  int n;
  cin>>n;
  string str;
  cin>>str;
  int l = 0, r = str.size() - 1;
  int res = str.size();
  while(l < r){
    if(str[l] == '0' && str[r] == '1'){
      l++;
      r--;
      res-=2;
    }
    else if(str[l] == '1' && str[r] == '0'){
      l++;
      r--;
      res-=2;
    }
    else{
      cout<<res<<"\n";
      return;
    }
  }
  cout<<res<<"\n";
}

int main(){
  
  ios_base::sync_with_stdio(false); cin.tie(nullptr);
  #ifndef ONLINE_JUDGE
    freopen("input.in", "r", stdin);
  #endif

  int t = 1;
  cin>>t;
  while(t--) f();
  
  return 0;
}