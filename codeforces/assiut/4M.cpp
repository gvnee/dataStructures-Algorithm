#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define sz(x) int((x).size())
#define pb push_back

void f(){
  string s; cin>>s;
  string h = "hello";
  int k = 0;
  for(int i = 0;i<sz(s);i++){
    if(s[i] == h[k]){
      k++;
      if(k == 5){
        cout<<"YES\n";
        return;
      }
    }
  }
  cout<<"NO\n";
}

int main(){
  cin.tie(0); ios_base::sync_with_stdio(0);
  int t = 1;
  // cin>>t;
  while(t--) f();
  return 0;
}