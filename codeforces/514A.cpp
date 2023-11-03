#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define sz(x) int((x).size())
#define debug(x) cerr<<#x<<": "<<(x)<<"\n"
#define pb push_back

void f(){
  string s;
  cin>>s;
  for(int i = 0;i<sz(s);i++){

    // cout<<s[i] - '0'<<" ";
    // cout<<'9' - s[i]<<"\n";
    
    if(s[i] == '9' && i == 0){
      cout<<s[i];
      continue;
    };
    if('9' - s[i] < s[i] - '0') cout<<'9' - s[i];
    else cout<<s[i];
  }
}

int main(){
  cin.tie(0); ios_base::sync_with_stdio(0);
  int t = 1;
  // cin>>t;
  while(t--) f();
  return 0;
}