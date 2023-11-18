#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define sz(x) int((x).size())
#define pb push_back

void f(){
  int a, b;
  cin>>a>>b;
  a = max(a, b);
  int d1 = 6-a+1, d2 = 6;
  int gcd = __gcd(d1, d2);
  cout<<d1/gcd<<"/"<<d2/gcd<<"\n";
}

int main(){
  cin.tie(0); ios_base::sync_with_stdio(0);
  int t = 1;
  // cin>>t;
  while(t--) f();
  return 0;
}