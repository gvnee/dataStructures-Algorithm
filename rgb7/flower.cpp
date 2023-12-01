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
  int r, g, b; cin>>r>>g>>b;
  int mn = min({r, g, b});
  int res = mn;
  r -= mn;
  g -= mn;
  b -= mn;
  res += r/3 + g/3 + b/3;
  cout<<res<<"\n";
}

int main(){
  cin.tie(0); ios_base::sync_with_stdio(0);
  int t = 1;
  // cin>>t;
  while(t--) f();
  return 0;
}