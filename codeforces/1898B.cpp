#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define sz(x) int((x).size())
#define pb push_back

void f(){
  int n; cin>>n;
  ll a[n] = {};
  for(int i = 1;i<=n;i++){
    cin>>a[i];
  }
  ll res = 0;
  ll prev = a[n];
  for(int i = n-1;i>=1;i--){
    ll cur = a[i];
    if(cur <= prev){
      prev = cur;
      continue;
    }
    ll whole = cur / prev - 1;
    res += whole;
    cur -= whole * prev;
    if(cur > prev){
      res++;
      cur /= 2;
      prev = cur;
    }
    else{
      if(cur != 0) prev = cur;
    }
  }
  cout<<res<<"\n";
}

int main(){
  cin.tie(0); ios_base::sync_with_stdio(0);
  int t = 1;
  cin>>t;
  while(t--) f();
  return 0;
}