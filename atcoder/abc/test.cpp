#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define sz(x) int((x).size())
#define debug(x) cerr<<#x<<": "<<(x)<<"\n"
#define pb push_back

void f(){
  string s = "1234";
  int temp = stoi(s);
  temp -= 10000;
  cout<<temp<<"\n";
  s = to_string(temp);
  cout<<s<<"\n";
  cout<<sz(s)<<"\n";
  s = s.substr(1, sz(s));
  cout<<sz(s)<<"\n";
  cout<<s<<"\n";
}

int main(){
  ios_base::sync_with_stdio(0); cin.tie(0);
  int t = 1;
  // cin>>t;
  while(t--) f();
  return 0;
}