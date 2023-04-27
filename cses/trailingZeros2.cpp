#include<bits/stdc++.h>
using namespace std;
 
typedef long long ll;
#define sz(x) int((x).size())
#define debug(x) cerr<<#x<<": "<<(x)<<"\n"
#define pb push_back
 
void f(){
  int n; cin>>n;
  int res = 0;
  for(int i = 5;i<=n;i+=5){
    int cur = i;
    while(cur % 5 == 0){
      cur /= 5;
      res++;
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