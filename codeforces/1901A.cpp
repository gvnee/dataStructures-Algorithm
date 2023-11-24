#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define sz(x) int((x).size())
#define pb push_back

void f(){
  int n, x;
  cin>>n>>x;
  vector<int> a;
  a.pb(0);
  int t;
  for(int i = 0;i<n;i++){
    cin>>t;
    a.pb(t);
  }
  a.pb(x);
  int res = 0;
  for(int i = 1;i<sz(a);i++){
    if(i == sz(a)-1) res = max(2 * (a[i] - a[i-1]), res);
    res = max(a[i] - a[i-1], res);
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