#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define sz(x) int((x).size())
#define pb push_back

void f(){
  int n; cin>>n;
  int a[n+1] = {};
  a[0] = 1;
  for(int i = 1;i<=n;i++){
    cin>>a[i];
  }
  ll res = 0;
  for(int i = 1;i<=n;i++){
    res += max(0, a[i] - a[i-1]);
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