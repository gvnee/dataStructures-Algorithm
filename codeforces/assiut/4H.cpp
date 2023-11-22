#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define sz(x) int((x).size())
#define pb push_back

void f(){
  string s;
  cin>>s;
  for(int i = 0;i<sz(s)-2;i++){
    string cur = s.substr(i, 3);
    if(cur == "010" || cur == "101"){
      cout<<"Good\n";
      return;
    }
  }
  cout<<"Bad\n";
}

int main(){
  cin.tie(0); ios_base::sync_with_stdio(0);
  int t = 1;
  cin>>t;
  while(t--) f();
  return 0;
}