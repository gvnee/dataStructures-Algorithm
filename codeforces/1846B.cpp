#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define sz(x) int((x).size())
#define pb push_back

void f(){
  int n = 3;
  string s[3];
  for(int i = 0;i<n;i++) cin>>s[i];
  for(int i = 0;i<n;i++){
    if(s[0][i] != '.' && s[0][i] == s[1][i] && s[2][i] == s[0][i]){
      cout<<s[0][i]<<"\n";
      return;
    }
  }
  for(int i = 0;i<n;i++){
    if(s[i][0] != '.' && s[i][0] == s[i][1] && s[i][2] == s[i][0]){
      cout<<s[i][0]<<"\n";
      return;
    }
  }

  if(s[0][0] != '.' && s[0][0] == s[1][1] && s[0][0] == s[2][2]) cout<<s[0][0]<<"\n";
  else if(s[0][2] != '.' && s[0][2] == s[1][1] && s[0][2] == s[2][0]) cout<<s[0][2]<<"\n";
  else cout<<"DRAW\n";

}

int main(){
  cin.tie(0); ios_base::sync_with_stdio(0);
  int t = 1;
  cin>>t;
  while(t--) f();
  return 0;
}