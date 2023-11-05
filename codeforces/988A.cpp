#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define sz(x) int((x).size())
#define pb push_back

void f(){
  int n, k;
  cin>>n>>k;
  vector<pair<int, int>> a;
  a.pb({0, 0});
  int t;
  for(int i = 1;i<=n;i++){
    cin>>t;
    a.pb({t, i});
  }
  sort(a.begin(), a.end());
  vector<int> v;
  for(int i = 1;i<=n;i++){
    if(a[i].first != a[i-1].first) v.pb(a[i].second);
    if(sz(v) == k) break;
  }
  if(sz(v) == k){
    cout<<"YES\n";
    for(int x:v) cout<<x<<" ";
  }
  else cout<<"NO\n";
}

int main(){
  cin.tie(0); ios_base::sync_with_stdio(0);
  int t = 1;
  // cin>>t;
  while(t--) f();
  return 0;
}