#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define sz(x) int((x).size())
#define debug(x) cerr<<#x<<": "<<(x)<<"\n"
#define pb push_back

string con(int a){
  string s = "";
  while(a>0){
    s += (a%2==0 ? "1" : "0");
    a /= 2;
  }
  reverse(s.begin(), s.end());
  return s;
}

void f(){
  for(int i = 0;i<(1<<15);i++){
    cout<<bitset<15>(i)<<"\n";
  }
}

int main(){
  ios_base::sync_with_stdio(0); cin.tie(0);
  int t = 1;
  // cin>>t;
  while(t--) f();
  return 0;
}