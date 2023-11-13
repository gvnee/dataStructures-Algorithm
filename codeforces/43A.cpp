#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define sz(x) int((x).size())
#define pb push_back

void f(){
  int n;
  cin>>n;
  string s;
  map<string, int> m;
  for(int i = 0;i<n;i++){
    cin>>s;
    m[s]++;
  }
  int mx = 0;
  string res;
  for(auto x:m){
    if(x.second > mx){
      mx = x.second;
      res = x.first;
    }
  }
  cout<<res<<"\n";
}

int main(){
  cin.tie(0); ios_base::sync_with_stdio(0);
  int t = 1;
  // cin>>t;
  while(t--) f();
  return 0;
}