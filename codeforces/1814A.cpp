#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define sz(x) int((x).size())
#define debug(x) cerr<<#x<<": "<<(x)<<"\n"

void f(){
  ll n, k;
  cin>>n>>k;
  if(n%2==0){
    cout<<"YES\n";
  }
  else if(k%2==0){
    cout<<"NO\n";
  }
  else cout<<"YES\n";
}

int main(){
  
  ios_base::sync_with_stdio(0); cin.tie(0);

  int t = 1;
  cin>>t;
  while(t--) f();
  
  return 0;
}