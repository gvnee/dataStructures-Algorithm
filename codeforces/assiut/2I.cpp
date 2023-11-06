#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define sz(x) int((x).size())
#define pb push_back

void f(){
  string s, c, res;
  cin>>c;
  s = c;
  reverse(c.begin(), c.end());
  bool f = false;
  for(char i:c){
    if(!f && i == '0') continue;
    f = true;
    res+=i;
  }
  cout<<res<<"\n";
  if(res == s) cout<<"YES\n";
  else cout<<"NO\n";
}

int main(){
  cin.tie(0); ios_base::sync_with_stdio(0);
  int t = 1;
  // cin>>t;
  while(t--) f();
  return 0;
}