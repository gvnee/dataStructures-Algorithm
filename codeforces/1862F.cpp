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
  int w, f; cin>>w>>f;
  int n; cin>>n;
  int a[n];
  ll total = 0;
  for(int i = 0;i<n;i++){
    cin>>a[i];
    total += a[i];
  }
  ll l = 1, r = 1e8;
  while(l<r){
    ll mid = l + (r-l)/2;
    if(mid * w + mid * f >= total){
      r = mid;
    }
    else l = mid + 1;
  }
  cout<<l<<"\n";
}

int main(){
  cin.tie(0); ios_base::sync_with_stdio(0);
  int t = 1;
  cin>>t;
  while(t--) f();
  return 0;
}