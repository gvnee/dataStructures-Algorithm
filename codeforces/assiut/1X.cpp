#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define sz(x) int((x).size())
#define debug(x) cerr<<#x<<": "<<(x)<<"\n"
#define pb push_back

void f(){
  ll l1, r1, l2, r2;
  cin>>l1>>r1>>l2>>r2;

  if(r1 < l2) cout<<"-1\n";
  else if(r2 < l1) cout<<"-1\n";
  else if(l2 <= r1){
    if(r2 < r1) cout<<l2<<" "<<r2<<"\n";
    else cout<<l2<<" "<<r1<<"\n";
  }
  else if(l1 <= r2){
    if(r1 < r2) cout<<l1<<" "<<r1<<"\n";
    cout<<l1<<" "<<r2<<"\n";
  }
}

int main(){
  cin.tie(0); ios_base::sync_with_stdio(0);
  int t = 1;
  // cin>>t;
  while(t--) f();
  return 0;
}