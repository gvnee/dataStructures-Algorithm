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
  int n; cin>>n;
  vector<pi> v;
  for(int i = 0;i<n;i++){
    int l, r;
    cin>>l>>r;
    v.pb({l, r});
  }

  auto valid = [&](int k) -> bool {
    int l = 0, r = 0;
    for(int i = 0;i<n;i++){
      l = max(l - k, v[i].F);
      r = min(r + k, v[i].S);
      if(l>r) return false;
    }
    return true;
  };
  
  int l = 0, r = 1e9;
  while(l<r){
    int mid = l + (r-l)/2;
    if(valid(mid)) r = mid;
    else l = mid+1;
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