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
  vector<pi> a;
  for(int i = 0;i<n;i++){
    int l, r;
    cin>>l>>r;
    a.pb({l, r});
  }
  int res = 0;
  int prev = 0;
  for(int i = 0;i<n;i++){
    int cur = 0;
    if(i == 0){
      cur = a[0].F;
    }
    else{
      cur = min(abs(a[i].F - prev), abs(a[i].S - prev));
      // cur = min((prev+cur)/2+1, a[i-1].S);
    }
    cout<<cur<<" ";
    res = max(res, cur);
    prev = a[i].F;
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