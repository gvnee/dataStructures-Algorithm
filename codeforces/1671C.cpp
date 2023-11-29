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
  int n, x; cin>>n>>x;
  ll a[n];
  for(int i = 0;i<n;i++) cin>>a[i];
  sort(a, a+n);
  for(int i = 1;i<n;i++){
    a[i] += a[i-1];
  }
  ll res = 0;
  for(int i = 0;i<n;i++){
    ll c = i + 1;
    if(a[i] > x) continue;
    res += max(0ll, (x - a[i])/c + 1);
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