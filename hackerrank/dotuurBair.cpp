#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define sz(x) int((x).size())
#define debug(x) cerr<<#x<<": "<<(x)<<"\n"

const int MOD = int(1e9) + 7;
double PI = atan(1)*4;
int temp;

void f(){
  ll n, k, x, y;
  cin>>n>>k>>x>>y;
  ll a;
  ll q;
  cin>>q;
  ll oCap = x*(n/k) + y*(n - n/k);
  ll oNum;
  ll f = (k-1) * y + x;
  for(int i = 0;i<q;i++){
    cin>>a;
    oNum = a/oCap;
    if(a%oCap == 0) oNum--;
    a -= oNum*oCap;
    ll d = a / f;
    ll r = a % f; 
    ll res;
    if(r > (k-1)*y || r == 0){
      d++;
      if(r == 0) d--;
      res = d*k;
    }
    else{
      res = r/y;
      if(r%y != 0) res++;
      res += d * k;
    }
    cout<<res<<"\n";
  }
}

int main(){
  
  ios_base::sync_with_stdio(false); cin.tie(nullptr);
  // freopen("input.in", "r", stdin);
  int t = 1;
  // cin>>t;
  while(t--) f();
  
  return 0;
}