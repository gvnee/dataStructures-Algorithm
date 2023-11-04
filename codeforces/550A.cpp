#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define sz(x) int((x).size())
#define pb push_back

void f(){
  string s;
  cin>>s;
  bool ab = 0, ba = 0;
  for(int i = 0;i<sz(s)-1;i++){
    if(!ab && s[i] == 'A' && s[i+1] == 'B'){
      ab = true;
      i++;
    }
    else if(!ba && s[i] == 'B' && s[i+1] == 'A'){
      ba = true;
      i+=2;
    }
  }
  if(ab && ba) cout<<"YES\n";
  else cout<<"NO\n";
}

int main(){
  cin.tie(0); ios_base::sync_with_stdio(0);
  int t = 1;
  // cin>>t;
  while(t--) f();
  return 0;
}