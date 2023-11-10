#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define sz(x) int((x).size())
#define pb push_back

void f(){
  int n;
  cin>>n;
  ll a, mx = INT_MIN;
  while(n--){
    cin>>a;
    ll cur = 0;
    while(a % 2==0){
      a /= 2;
      cur++;
    }
    mx = max(cur, mx);
  }
  cout<<mx<<"\n";
}

int main(){
  cin.tie(0); ios_base::sync_with_stdio(0);
  int t = 1;
  // cin>>t;
  while(t--) f();
  return 0;
}