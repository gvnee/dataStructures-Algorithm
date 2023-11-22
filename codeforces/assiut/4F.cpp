#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define sz(x) int((x).size())
#define pb push_back

void f(){
  string s; cin>>s;
  if(sz(s) <= 10){
    cout<<s<<"\n";
    return;
  }
  cout<<s[0]<<to_string(sz(s)-2)<<s[sz(s)-1]<<"\n";
}

int main(){
  cin.tie(0); ios_base::sync_with_stdio(0);
  int t = 1;
  cin>>t;
  while(t--) f();
  return 0;
}