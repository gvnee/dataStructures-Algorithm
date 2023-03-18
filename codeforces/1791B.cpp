#include <bits/stdc++.h>
using namespace std;

using ll = long long;

#define debug(x) cerr<<#x<<": "<<(x)<<"\n"

const int MOD = int(1e9) + 7;
double PI = atan(1)*4;
int temp;

void f(){
  int n;
  string s;
  cin>>n;
  cin>>s;
  int x = 0, y = 0;
  for(int i = 0;i<s.size();i++){
    if(s[i] == 'L') x--;
    else if(s[i] == 'R') x++;
    else if(s[i] == 'U') y++;
    else if(s[i] == 'D') y--;
    if(x == 1 && y == 1){
      cout<<"YES\n";
      return;
    }
  }
    cout<<"NO\n";
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