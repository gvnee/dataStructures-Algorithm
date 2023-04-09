#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define sz(x) int((x).size())
#define debug(x) cerr<<#x<<": "<<(x)<<"\n"

void f(){
  string s;
  cin>>s;
  vector<int> b, r;
  int k;
  for(int i = 0;i<sz(s);i++){
    if(s[i] == 'B'){
      b.push_back(i);
    }
    if(s[i] == 'K'){
      k = i;
    }
    if(s[i] == 'R'){
      r.push_back(i);
    }
  }
  if(b[0]%2 == b[1]%2){
    cout<<"No\n";
    return;
  }
  if(r[0]>k || r[1]<k){
    cout<<"No\n";
    return;
  }
  cout<<"Yes\n";
}

int main(){
  ios_base::sync_with_stdio(0); cin.tie(0);
  int t = 1;
  // cin>>t;
  while(t--) f();
  return 0;
}