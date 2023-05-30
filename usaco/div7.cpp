#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define sz(x) int((x).size())
#define debug(x) cerr<<#x<<": "<<(x)<<"\n"
#define pb push_back

void f(){
  int n;
  cin>>n;
  ll a[n+1] = {};
  for(int i = 1;i<=n;i++){
    cin>>a[i];
    a[i] += a[i-1];
  }
  int res = 0;
  for(int dst = n;dst >= 1;dst--){
    for(int i = 0;i+dst<=n;i++){
      if((a[dst+i] - a[i]) % 7 == 0){
        cout<<dst<<"\n";
        return;
      }
    }
  }
  cout<<res<<"\n";
}

int main(){
  ios_base::sync_with_stdio(0); cin.tie(0);
  int t = 1;
  freopen("div7.in", "r", stdin);
  freopen("div7.out", "w", stdout);
  // cin>>t;
  while(t--) f();
  return 0;
}