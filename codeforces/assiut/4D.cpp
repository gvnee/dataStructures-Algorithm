#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define sz(x) int((x).size())
#define pb push_back

void f(){
  string a, b; cin>>a>>b;
  cout<<sz(a)<<" "<<sz(b)<<"\n";
  cout<<a+b<<"\n";
  swap(a[0], b[0]);
  cout<<a<<" "<<b<<"\n";
}

int main(){
  cin.tie(0); ios_base::sync_with_stdio(0);
  int t = 1;
  // cin>>t;
  while(t--) f();
  return 0;
}