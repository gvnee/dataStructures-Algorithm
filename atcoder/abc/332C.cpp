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
  int n, plain; cin>>n>>plain;
  string s; cin>>s;
  int logo = 0;
  int plainMax = plain;
  int logoMax = 0;
  for(char c:s){
    if(c == '0'){
      logo = logoMax;
      plain = plainMax;
    }
    else if(c == '1'){
      if(plain) plain--;
      else if(logo) logo--;
      else{
        logoMax++;
      }
    }
    else{
      if(logo) logo--;
      else{
        logoMax++;
      }
    }
  }
  cout<<logoMax<<"\n";
}

int main(){
  cin.tie(0); ios_base::sync_with_stdio(0);
  int t = 1;
  // cin>>t;
  while(t--) f();
  return 0;
}