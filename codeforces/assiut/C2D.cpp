#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define sz(x) int((x).size())
#define pb push_back

ll sum(ll a){
  return a * (a+1)/2;
}

void f(){
  ll l, r;
  cin>>l>>r;
  if(r > l)
    cout<<sum(r)-sum(l-1)<<"\n";
  else
    cout<<sum(l)-sum(r-1)<<"\n";
  
}

int main(){
  cin.tie(0); ios_base::sync_with_stdio(0);
  int t = 1;
  cin>>t;
  while(t--) f();
  return 0;
}