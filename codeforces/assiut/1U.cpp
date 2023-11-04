#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define sz(x) int((x).size())
#define debug(x) cerr<<#x<<": "<<(x)<<"\n"
#define pb push_back

void f(){
  // float n;
  // cin>>n;
  // float d = n - int(n);
  // if(d == 0) cout<<"int "<<n;
  // else cout<<"float "<<int(n)<<" "<<d;

  string s;
  cin>>s;
  int d = 0;
  for(int i = 0;i<sz(s);i++){
    if(s[i] == '.') d = i;
  }
  int a = stoi(s.substr(0, d));
  int b = stoi(s.substr(d+1, sz(s) - d));

  if(b == 0) cout<<"int "<<a<<"\n";
  else cout<<"float "<<a<<" 0."<<b<<"\n";
  
}

int main(){
  cin.tie(0); ios_base::sync_with_stdio(0);
  int t = 1;
  // cin>>t;
  while(t--) f();
  return 0;
}