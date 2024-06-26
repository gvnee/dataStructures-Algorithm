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
  int n; cin>>n;
  vector<pi> v;
  for(int i = 0;i<n;i++){
    int a, d;
    cin>>a>>d;
    v.pb({a, d});
  }
  sort(all(v));
  int finish = 0;
  int res = 0;
  for(auto [duration, deadline]:v){
    finish += duration;
    res += deadline - finish;
  }
  cout<<res<<"\n";
}

signed main(){
  cin.tie(0); ios_base::sync_with_stdio(0);
  int t = 1;
  // cin>>t;
  while(t--) f();
  return 0;
}