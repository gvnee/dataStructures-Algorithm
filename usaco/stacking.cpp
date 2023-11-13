#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define sz(x) int((x).size())
#define pb push_back

void f(){
  int n = 1, q, l, r;
  cin>>n>>q;
  vector<pair<int, bool> > a;
  for(int i = 0;i<q;i++){
    cin>>l>>r;
    if(l>r) swap(l, r);
    n = max(n, r);
    l--;
    r--;
    a.pb({l, 0});
    a.pb({r, 1});
  }
  int res[n] = {};
  sort(a.begin(), a.end());
  int cur = 0, hb = 0;
  for(int i = 0;i<n;i++){
    while(a[cur].first == i && !a[cur].second){
      hb++;
      cur++;
    }
    res[i] += hb;
    while(a[cur].first == i && a[cur].second){
      hb--;
      cur++;
    }
  }
  sort(res, res+n);
  cout<<res[(n-1)/2]<<"\n";
}

int main(){
  cin.tie(0); ios_base::sync_with_stdio(0);
  int t = 1;
  // cin>>t;
  while(t--) f();
  return 0;
}