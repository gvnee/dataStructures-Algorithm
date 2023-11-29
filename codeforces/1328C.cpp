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
  int n; cin>>n;
  string s; cin>>s;
  string a = "", b = "";
  bool aGot = false;
  for(char c:s){
    if(c == '2'){
      if(aGot) a += '0', b += '2';
      else a += '1', b += '1';
    }
    else if(c == '0') a += c, b += c;
    else if(!aGot) a += '1', b += '0', aGot = true;
    else a += '0', b += '1';
  }
  cout<<a<<"\n"<<b<<"\n";
}

int main(){
  cin.tie(0); ios_base::sync_with_stdio(0);
  int t = 1;
  cin>>t;
  while(t--) f();
  return 0;
}