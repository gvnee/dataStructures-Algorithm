#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define sz(x) int((x).size())
#define debug(x) cerr<<#x<<": "<<(x)<<"\n"
#define pb push_back

void f(){
  int x, y, k;
  cin>>x>>y>>k;
  if(x>=y) cout<<x<<"\n";
  else{
    int res = x;
    int carry = min(y - x, k);
    res += carry;
    res += (y - carry - x) * 2;
    cout<<res<<"\n";
  }
}

int main(){
  cin.tie(0); ios_base::sync_with_stdio(0);
  int t = 1;
  cin>>t;
  while(t--) f();
  return 0;
}