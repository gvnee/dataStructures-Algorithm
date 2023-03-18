#include <bits/stdc++.h>
using namespace std;

using ll = long long;

#define debug(x) cerr<<#x<<": "<<(x)<<"\n"

const int MOD = int(1e9) + 7;
double PI = atan(1)*4;
int temp;

void f(){
  string s;
  cin>>s;
  int a = 0, b = s.size()-1;
  bool impossible = 0, alreadyPal = 1;
  int c = 0;
  int res = 0;
  while(a<=b){
    if(s[a] == s[b]){
      a++;
      b--;
    }
    else if(c > 1){
      impossible = true;
      break;
    }
    else{
      c++;
      alreadyPal = false;
      if(s[a+1] == s[b] && s[b-1] == s[a]){
        
      }
      if(s[a+1] == s[b]){
        res = a;
        a++;
      }
      else if(s[b-1] == s[a]){
        res = b;
        b--;
      }
      else{
        impossible = true;
        break;
      }
    }
  }
  if(impossible || alreadyPal) cout<<"-1\n";
  else cout<<res<<"\n";
}

int main(){
  
  ios_base::sync_with_stdio(false); cin.tie(nullptr);
  freopen("input.in", "r", stdin);
  int t = 1;
  cin>>t;
  while(t--) f();
  
  return 0;
}
