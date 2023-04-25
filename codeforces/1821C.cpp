#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define sz(x) int((x).size())
#define debug(x) cerr<<#x<<": "<<(x)<<"\n"
#define pb push_back

void f(){
  string s;
  cin>>s;
  int res = INT_MAX;
  for(char c = 'a';c<='z';c++){
    int dst = 0, maxDst = 0;
    for(char x:s){
      if(x == c) dst = 0;
      else dst++;
      maxDst = max(dst, maxDst);
    }
    int cur = 0;
    while(maxDst > 0){
      cur++;
      maxDst /= 2;
    }
    res = min(res, cur);
  }
  cout<<res<<"\n";
}

int main(){
  ios_base::sync_with_stdio(0); cin.tie(0);
  int t = 1;
  cin>>t;
  while(t--) f();
  return 0;
}