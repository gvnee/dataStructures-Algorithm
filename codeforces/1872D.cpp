#include<bits/stdc++.h>
using namespace std;

#define all(x) x.begin(), x.end()
#define sz(x) int((x).size())
typedef pair<int,int> pi;
typedef long long ll;
#define pb push_back
#define S second
#define F first

void f(){
  ll n, x, y; cin>>n>>x>>y;
  ll f = n/x;
  ll s = n/y;
  ll in = lcm(x, y);
  in = n/in;
  f -= in;
  s -= in;
  ll res = ((n * (n+1) / 2) - ((n-f) * (n-f+1) / 2)) - s * (s+1) / 2;
  cout<<res<<"\n";
}

int main(){
  cin.tie(0); ios_base::sync_with_stdio(0);
  int t = 1;
  cin>>t;
  while(t--) f();
  return 0;
}