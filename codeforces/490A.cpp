#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define sz(x) int((x).size())
#define debug(x) cerr<<#x<<": "<<(x)<<"\n"
#define pb push_back

void f(){
  int n;
  cin>>n;
  vector<int> v(n);
  vector<int> a, b, c;
  for(int i = 1;i<=n;i++){
    cin>>v[i];
    if(v[i] == 1){
      a.pb(i);
    }
    else if(v[i] == 2){
      b.pb(i);
    }
    else{
      c.pb(i);
    }
  }
  int res = min(sz(a), min(sz(b), sz(c)));
  cout<<res<<"\n";
  for(int i = 0;i<res;i++){
    cout<<a[i]<<" "<<b[i]<<" "<<c[i]<<"\n";
  }
}

int main(){
  cin.tie(0); ios_base::sync_with_stdio(0);
  int t = 1;
  // cin>>t;
  while(t--) f();
  return 0;
}