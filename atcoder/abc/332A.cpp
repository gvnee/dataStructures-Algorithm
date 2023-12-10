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
  ll n, s, k; cin>>n>>s>>k;
  ll res = 0;
  for(int i = 0;i<n;i++){
    ll p, q;
    cin>>p>>q;
    res += p*q;
  }
  if(res < s) res += k;
  cout<<res<<"\n";
}

int main(){
  cin.tie(0); ios_base::sync_with_stdio(0);
  int t = 1;
  // cin>>t;
  while(t--) f();
  return 0;
}