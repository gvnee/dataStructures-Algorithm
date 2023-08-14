#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define sz(x) int((x).size())
#define debug(x) cerr<<#x<<": "<<(x)<<"\n"
#define pb push_back

void f(){
  int n, m;
  cin>>n>>m;
  int res = 0;
  
  while(n < m){
    if(m % 2 != 0){
      m++;
      res++;
    }
    m /= 2;
    res++;
  }

  if(n > m) res += n - m;
  
  cout<<res<<"\n";
}

int main(){
  ios_base::sync_with_stdio(0); cin.tie(0);
  int t = 1;
  // cin>>t;
  while(t--) f();
  return 0;
}