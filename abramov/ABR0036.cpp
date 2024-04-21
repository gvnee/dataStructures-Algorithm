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
  double a, b, c; cin>>a>>b>>c;
  cout.setf(ios::fixed|ios::showpoint);
  cout.precision(1);
  if(a < b && b < c) cout<<"YES\n";
  else cout<<"NO\n";
}

int main(){
  cin.tie(0); ios_base::sync_with_stdio(0);
  int t = 1;
  // cin>>t;
  while(t--) f();
  return 0;
}