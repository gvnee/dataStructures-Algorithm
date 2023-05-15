#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define sz(x) int((x).size())
#define debug(x) cerr<<#x<<": "<<(x)<<"\n"
#define pb push_back

void f(){
  int n; cin>>n;
  ll res = 0;
  for(int i = 1;i<=n;i++){
    for(int j = i+1;j<=n;j++){
      int k = i^j;
      if(i+j>k && i+k>j && k+j>i && k > i && k > j && k<=n){
        // cout<<i<<" "<<j<<" "<<k<<"\n";
        res++;
      }
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