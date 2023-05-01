#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define sz(x) int((x).size())
#define debug(x) cerr<<#x<<": "<<(x)<<"\n"
#define pb push_back

void f(){
  int a, b, c;
  cin>>a>>b>>c;
  if(a>b) swap(a, b);
  if(a>c) swap(a, c);
  if(b>c) swap(b, c);
  int mn = 0, mx = 0;
  if(a+1==b && b+1==c) mn = 0;
  else if(a+2==b || b+2==c) mn = 1;
  else mn = 2;
  mx = max(c - b, b - a)-1;
  cout<<mn<<"\n"<<mx<<"\n";
}

int main(){
  ios_base::sync_with_stdio(0); cin.tie(0);
  freopen("herding.in", "r", stdin);
  freopen("herding.out", "w", stdout);
  int t = 1;
  // cin>>t;
  while(t--) f();
  return 0;
}