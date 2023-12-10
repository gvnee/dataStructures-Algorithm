#include<bits/stdc++.h>
using namespace std;

#define all(x) x.begin(), x.end()
#define sz(x) int((x).size())
typedef pair<int,int> pi;
typedef long long ll;
#define pb push_back
#define S second
#define F first

void f(){
  ll n, k; cin>>n>>k;
  vector<ll> a(n);
  for(int i = 0;i<n;i++){
    cin>>a[i];
  }
  sort(all(a));
  if(k > 2){
    cout<<"0\n";
  }
  else if(k == 1){
    ll res = a[0];
    for(int i = 1;i<n;i++){
      res = min(res, a[i] - a[i-1]);
    }
    cout<<res<<"\n";
  }
  else{
    vector<ll> v;
    ll res = a[0];

    for(int i = 1;i<n;i++){
      res = min(res, a[i] - a[i-1]);
      v.pb(a[i] - a[i-1]);
    }
    sort(all(v));
    for(int i = 0;i<n;i++){
      for(auto x:v){
        res = min(res, abs(x-a[i]));
      }
    }
    cout<<res<<"\n";
  }
}

int main(){
  cin.tie(0); ios_base::sync_with_stdio(0);
  int t = 1;
  cin>>t;
  while(t--) f();
  return 0;
}