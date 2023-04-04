#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define sz(x) int((x).size())
#define debug(x) cerr<<#x<<": "<<(x)<<"\n"

const int MOD = int(1e9) + 7;
double PI = atan(1)*4;
int temp;

void f(){
  ll n;
  cin>>n;
  vector<ll> x(n), y(n);
  for(ll &i:x) cin>>i;
  for(ll &i:y) cin>>i;
  ll res = 0;
  for(int i = 0;i<n;i++){
    for(int j = i+1;j<n;j++){
      res = max(res, (abs(x[i] - x[j]) * abs(x[i] - x[j]) + abs(y[i] - y[j]) * abs(y[i] - y[j])));
    }
  }
  cout<<res<<"\n";
}

int main(){
  
  ios_base::sync_with_stdio(false); cin.tie(nullptr);

  int t = 1;
  // cin>>t;
  while(t--) f();
  
  return 0;
}