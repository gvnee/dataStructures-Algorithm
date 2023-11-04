#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define sz(x) int((x).size())
#define pb push_back

void f(){
  int n, d;
  cin>>n>>d;
  vector<pair<int, ll>> a(n);
  int x, y;
  for(int i = 0;i<n;i++){
    cin>>x>>y;
    a[i].first = x;
    a[i].second = y;
  }

  sort(a.begin(), a.end());

  int l = 0;
  ll cur = 0;
  ll res = 0;

  for(int r = 0;r<n;r++){
    cur += a[r].second;
    while(a[r].first - a[l].first >= d){
      cur -= a[l].second;
      l++;
    }
    res = max(res, cur);
  }

  cout<<res<<"\n";
}

int main(){
  cin.tie(0); ios_base::sync_with_stdio(0);
  int t = 1;
  // cin>>t;
  while(t--) f();
  return 0;
}