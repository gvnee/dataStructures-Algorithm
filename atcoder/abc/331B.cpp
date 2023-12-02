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
  int n; cin>>n;
  int x, y, z;
  cin>>x>>y>>z;
  ll res = LLONG_MAX;
  for(int a = 0;a<=30;a++){
    for(int b = 0;b<=30;b++){
      for(int c = 0;c<=30;c++){
        ll cur = a*6 + b*8 + c*12;
        ll curPrice = a*x + b*y + c*z;
        if(cur >= n) res = min(res, curPrice);
      }
    }
  }
  cout<<res<<"\n";
}

int main(){
  cin.tie(0); ios_base::sync_with_stdio(0);
  int t = 1;
  // cin>>t;
  while(t--) f();
  return 0;
}