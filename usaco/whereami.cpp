#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define sz(x) int((x).size())
#define debug(x) cerr<<#x<<": "<<(x)<<"\n"
#define pb push_back

void f(){
  int n;
  cin>>n;
  string s;
  cin>>s;
  map<string, int> m;
  int res = INT_MAX;
  for(int i = 0;i<n;i++){
    for(int j = i;j<n;j++){
      string cur = "";
      for(int k = i;k<=j;k++){
        cur+=s[k];
      }
      m[cur]++;
    }
  }

  for(auto &x:m){
    if(x.second == 1){
      res = min(res, sz(x.first));
    }
  }
  cout<<res+1<<"\n";
  
}

int main(){
  ios_base::sync_with_stdio(0); cin.tie(0);
  int t = 1;
  // cin>>t;
  while(t--) f();
  return 0;
}