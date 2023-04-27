#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define sz(x) int((x).size())
#define debug(x) cerr<<#x<<": "<<(x)<<"\n"
#define pb push_back

void f(){
  int n;
  cin>>n;
  vector<int> a(n), b(n), c(n);
  for(int &x:a) cin>>x;
  for(int &x:b) cin>>x;
  for(int &x:c) cin>>x;

  unordered_map<int, int> m;
  for(int x:a) m[x]++;
  
  ll res = 0;
  for(int x:c){
    res += m[b[x-1]];
  }
  cout<<res<<"\n";
}

int main(){
  ios_base::sync_with_stdio(0); cin.tie(0);
  int t = 1;
  // cin>>t;
  while(t--) f();
  return 0;
}