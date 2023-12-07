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
  ll n, k, x; cin>>n>>k>>x;
  ll l = n - k;
  if((n*(n+1)/2) - (l * (l+1)/2) < x){
    cout<<"NO\n";
  }
  else if((k * (k+1)/2) > x){
    cout<<"NO\n";
  }
  else cout<<"YES\n";
}

int main(){
  cin.tie(0); ios_base::sync_with_stdio(0);
  int t = 1;
  cin>>t;
  while(t--) f();
  return 0;
}