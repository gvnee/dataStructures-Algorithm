#include<bits/stdc++.h>
using namespace std;

#define all(x) x.begin(), x.end()
#define sz(x) int((x).size())
typedef pair<int,int> pi;
typedef long long ll;
#define pb push_back
#define S second
#define F first

void f(){
  string s; cin>>s;
  for(char c:s){
    if(c == '0') cout<<"0000";
    if(c == '1') cout<<"0001";
    if(c == '2') cout<<"0010";
    if(c == '3') cout<<"0011";
    if(c == '4') cout<<"0100";
    if(c == '5') cout<<"0101";
    if(c == '6') cout<<"0110";
    if(c == '7') cout<<"0111";
    if(c == '8') cout<<"1000";
    if(c == '9') cout<<"1001";
  }
}

int main(){
  cin.tie(0); ios_base::sync_with_stdio(0);
  int t = 1;
  // cin>>t;
  while(t--) f();
  return 0;
}