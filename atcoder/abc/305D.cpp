#include<bits/stdc++.h>
using namespace std;

#define all(x) x.begin(), x.end()
#define sz(x) int((x).size())
#define pii pair<int, int>
typedef long long ll;
#define pb push_back
#define S second
#define F first

vector<pair<int, int>> s;

bool comp(int a, int b){
  return a <= b;
}

void f(){
  int n; cin>>n;
  vector<int> a(n+1);
  for(int i = 1;i<=n;i++){
    cin>>a[i];
  }
  ll pre[n+1] = {};
  for(int i = 1;i<=n;i++){
    if(i != 1 && i%2) pre[i] = a[i] - a[i-1];
    pre[i] += pre[i-1];
  }
  int q; cin>>q;
  while(q--){
    int l, r;
    cin>>l>>r;
    auto it1 = upper_bound(all(a), l, comp);
    auto it2 = lower_bound(all(a), r, comp);
    int i1 = distance(a.begin(), it1);
    int i2 = distance(a.begin(), it2);
    // cout<<i1<<" "<<i2<<"\n";
    ll res = pre[min(n, i2)] - pre[max(0, i1-1)];
    if(i1%2) res -= l-a[i1-1];
    if(i2%2) res -= a[i2]-r;
    cout<<res<<"\n";
  }
}

int main(){
  cin.tie(0); ios_base::sync_with_stdio(0);
  int t = 1;
  // cin>>t;
  while(t--) f();
  return 0;
}