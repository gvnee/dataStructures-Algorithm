#include<bits/stdc++.h>
using namespace std;

#define F first
#define S second
#define pb push_back
#define int long long
typedef pair<int,int> pi;
#define sz(x) int((x).size())
#define all(x) x.begin(), x.end()

void f(){
  int n, k; cin>>n>>k;
  vector<pi> a;
  for(int i = 0;i<n;i++){
    int x, y;
    cin>>x>>y;
    a.pb({y, x});
  }
  sort(all(a));
  sz(a);
}

signed main(){
  cin.tie(0); ios::sync_with_stdio(0);
  int t = 1;
  // cin>>t;
  while(t--) f();
  return 0;
}