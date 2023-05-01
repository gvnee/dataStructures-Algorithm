#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define sz(x) int((x).size())
#define debug(x) cerr<<#x<<": "<<(x)<<"\n"
#define pb push_back

void f(){
  int n;
  cin>>n;
  int a[n+1] = {};
  bool f[n+1] = {};
  a[1] = 1;
  for(int i = 2;i<=n;i++){
    a[i] += 2;
    for(int j = i+i;j<=n;j+=i){
      a[j]++;
    }
  }
  unordered_set<int> s;
  ll res = 0;
  for(int i = 1;i<=n;i++){
    if(!f[a[i]]){
      res += i;
      f[a[i]] = true;
    }
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