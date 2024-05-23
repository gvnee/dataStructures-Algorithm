#include<bits/stdc++.h>
using namespace std;

#define F first
#define S second
#define pb push_back
#define int long long
#define pi pair<int,int>
#define sz(x) (int)(x).size()
#define all(x) x.begin(), x.end()

void f(){
  int n; cin>>n;
  multiset<int> s;
  for(int i = 0;i<n;i++){
    int a; cin>>a;
    auto it = s.upper_bound(a);
    if(it == s.end()){
      s.insert(a);
      continue;
    }
    s.erase(it);
    s.insert(a);
  }
  cout<<sz(s)<<"\n";
}

signed main(){
  cin.tie(0); ios::sync_with_stdio(0);
  int t = 1;
  // cin>>t;
  while(t--) f();
  return 0;
}