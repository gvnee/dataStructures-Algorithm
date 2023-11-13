#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define sz(x) int((x).size())
#define pb push_back

void f(){
  int n, k, b;
  cin>>n>>k>>b;
  int a[n+1] = {};
  int t;
  for(int i = 0;i<b;i++){
    cin>>t;
    a[t]++;
  }
  for(int i = 2;i<=n;i++) a[i] += a[i-1];
  int res = INT_MAX;
  for(int i = 1;i<=n-k+1;i++){
    res = min(res, a[k+i-1] - a[i-1]);
  }
  cout<<res<<"\n";
}

int main(){
  cin.tie(0); ios_base::sync_with_stdio(0);
  freopen("maxcross.in", "r", stdin);
  freopen("maxcross.out", "w", stdout);
  int t = 1;
  // cin>>t;
  while(t--) f();
  return 0;
}