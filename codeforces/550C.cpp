#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define sz(x) int((x).size())
#define pb push_back

bool div(int r){
  if(r%8==0){
    cout<<"YES\n"<<r<<"\n";
  }
  return r%8==0;
}

void f(){
  string s;
  cin>>s;
  int l = sz(s);
  for(int i = 0;i<l;i++){
    int r = s[i] - '0';
    if(div(r)) return;
    for(int j = i+1;j<l;j++){
      int r = s[j] - '0';
      r += (s[i] - '0')*10;
      if(div(r)) return;
      for(int k = j+1;k<l;k++){
        int r = s[k] - '0';
        r += (s[j]-'0')*10;
        r += (s[i]-'0')*100;
        if(div(r)) return;
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