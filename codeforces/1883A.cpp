#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define sz(x) int((x).size())
#define pb push_back

void f(){
  string s;
  cin>>s;
  int cur = 1, res = 0;
  for(char c:s){
    int need = c-'0';
    if(c == '0') need = 10;
    if(cur == 0) cur = 10;
    res+=abs(need - cur);
    need = c-'0';
    cur = need;
    res++;
  }
  cout<<res<<"\n";
}

int main(){
  cin.tie(0); ios_base::sync_with_stdio(0);
  int t = 1;
  cin>>t;
  while(t--) f();
  return 0;
}