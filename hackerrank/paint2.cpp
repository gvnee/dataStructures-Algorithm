#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define debug(x) cerr<<#x<<": "<<(x)<<"\n"

const int MOD = int(1e9) + 7;
double PI = atan(1)*4;
int temp;

void f(){
  int n;
  cin>>n;
  string s;
  cin>>s;
  ll mx = 0, cur = 0;
  char a = s[0], b= s[1];
  int bCount = 1;
  for(char c:s){
    if(c == a){
      cur++;
    }
    else if(c == b){
      cur++;
      bCount++;
    }
    else{
      char temp = b;
      b = c;
      a = temp;
      mx = max(cur, mx);
      cur = bCount;
      bCount = 1;
    }
  }
  mx = max(mx, cur);
  cout<<mx<<"\n";
}

int main(){
  
  ios_base::sync_with_stdio(false); cin.tie(nullptr);
  #ifndef ONLINE_JUDGE
    freopen("input.in", "r", stdin);
  #endif

  int t = 1;
  // cin>>t;
  while(t--) f();
  
  return 0;
}