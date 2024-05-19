#include<bits/stdc++.h>
using namespace std;

#define all(x) x.begin(), x.end()
#define sz(x) int((x).size())
typedef pair<int,int> pi;
typedef long long ll;
#define pb push_back
#define S second
#define F first

ll binpow(ll a, ll b){
  ll res = 1;
  while(b){
    if(b&1) res *= a;
    a *= a;
    b >>= 1;
  }
  return res;
}

void f(){
  int n;
  cin>>n;
  cout<<24 * binpow(4, n-3) + (n-3) * 4 * 3 * 3 * binpow(4, max(n-4, 0));
}

int main(){
  cin.tie(0); ios_base::sync_with_stdio(0);
  int t = 1;
  // cin>>t;
  while(t--) f();
  return 0;
}