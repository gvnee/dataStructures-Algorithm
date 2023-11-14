#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define sz(x) int((x).size())
#define pb push_back

void f(){
  ll n;
  cin>>n;
  int res = 0;

  while(res < 1e3){
    if(n == 1) break;
    res++;
    if(n % 6 == 0) n /= 6;
    else n *= 2;
  }

  if(n == 1){
    cout<<res<<"\n";
  }
  else cout<<"-1\n";
  
}

int main(){
  cin.tie(0); ios_base::sync_with_stdio(0);
  int t = 1;
  cin>>t;
  while(t--) f();
  return 0;
}