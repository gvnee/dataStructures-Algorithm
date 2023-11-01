#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define sz(x) int((x).size())
#define debug(x) cerr<<#x<<": "<<(x)<<"\n"
#define pb push_back
#define bill_tin __builtin_popcount

// void f(){
//   int n;
//   cin>>n;
//   int res = 0;
//   while(n > 0){
//     if(n % 2 == 0) n /= 2;
//     else{
//       n -= 1;
//       n /= 2;
//       res++;
//     }
//   }
//   cout<<res<<"\n";
// }

void f(){
  int n;
  cin>>n;
  cout<<bill_tin(n)<<"\n";
}

int main(){
  cin.tie(0); ios_base::sync_with_stdio(0);
  int t = 1;
  // cin>>t;
  while(t--) f();
  return 0;
}