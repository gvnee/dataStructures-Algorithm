#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define sz(x) int((x).size())
#define pb push_back

void f(){
  int n;
  cin>>n;
  ll a[n+1] = {};
  ll res = INT_MIN, cur = 0;
  for(int i = 1;i<=n;i++){
    cin>>a[i];
    cur = max(a[i], cur + a[i]);
    if(abs(a[i-1] % 2) == abs(a[i] % 2)) cur = a[i];
    res = max(res, cur);
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