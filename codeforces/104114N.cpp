#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define sz(x) int((x).size())
#define pb push_back

void f(){
  int n, m;
  cin>>n>>m;
  ll a[n+1];
  for(int i = 1;i<=n;i++){
    cin>>a[i];
  }
  for(int i = 1;i<n;i++){
    ll dif = abs(a[i] - a[i+1]);
    if(dif <= m) continue;
    if(a[i] > a[i+1]){
      a[i+1] += dif - m;
    }
  }
  for(int i = n;i>1;i--){
    ll dif = abs(a[i] - a[i-1]);
    if(dif <= m) continue;
    if(a[i] > a[i-1]){
      a[i-1] += dif - m;
    }
  }
  for(int i = 1;i<=n;i++) cout<<a[i]<<" \n"[i==n];
}

int main(){
  cin.tie(0); ios_base::sync_with_stdio(0);
  int t = 1;
  // cin>>t;
  while(t--) f();
  return 0;
}