#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define sz(x) int((x).size())
#define debug(x) cerr<<#x<<": "<<(x)<<"\n"
#define pb push_back

void f(){
  ll n, k;
  cin>>n>>k;

  int d = k/(n-1);
  int r = k%(n-1);
  if(k%(n-1)==0){
    d--;
    r += (n-1);
  }
  
  cout<<d * n + r<<"\n";
}

int main(){
  cin.tie(0); ios_base::sync_with_stdio(0);
  int t = 1;
  cin>>t;
  while(t--) f();
  return 0;
}