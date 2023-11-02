#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define sz(x) int((x).size())
#define debug(x) cerr<<#x<<": "<<(x)<<"\n"
#define pb push_back

void f(){
  string s;
  cin>>s;
  int n;
  int l = sz(s);
  if(l < 5){
    n = stoi(s);
  }
  else{
    n = stoi(s.substr(l-2, 2));
  }
  if(n % 4) cout<<0<<"\n";
  else cout<<4<<"\n";
}

int main(){
  cin.tie(0); ios_base::sync_with_stdio(0);
  int t = 1;
  // cin>>t;
  while(t--) f();
  return 0;
}