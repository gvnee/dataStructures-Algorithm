#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define sz(x) int((x).size())
#define pb push_back

void f(){
  int a, b;
  string s;
  cin>>a>>b>>s;
  int d = 0;
  for(int i = 0;i<sz(s);i++){
    if(s[i] == '-'){
      if(i != a){
        cout<<"No\n";
        return;
      }
      d++;
    }
    else if(s[i] > '9' || s[i] < '0'){
      cout<<"No\n";
      return;
    }
  }
  if(d) cout<<"Yes\n";
  else cout<<"No\n";
}

int main(){
  cin.tie(0); ios_base::sync_with_stdio(0);
  int t = 1;
  // cin>>t;
  while(t--) f();
  return 0;
}