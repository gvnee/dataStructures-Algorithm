#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define sz(x) int((x).size())
#define pb push_back

void f(){
  int n;
  cin>>n;
  string s;
  cin>>s;
  for(int i = 0;i<n-2;i++){
    if(s.substr(i, 3) == "..."){
      cout<<2<<"\n";
      return;
    }
  }
  int d = 0;
  for(int i = 0;i<n;i++) if(s[i] == '.') d++;
  cout<<d<<"\n";
}

int main(){
  cin.tie(0); ios_base::sync_with_stdio(0);
  int t = 1;
  cin>>t;
  while(t--) f();
  return 0;
}