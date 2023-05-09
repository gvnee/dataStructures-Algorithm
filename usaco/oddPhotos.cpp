#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define sz(x) int((x).size())
#define debug(x) cerr<<#x<<": "<<(x)<<"\n"
#define pb push_back

void f(){
  int n, a, even = 0, odd = 0;
  cin>>n;
  for(int i = 0;i<n;i++){
    cin>>a;
    if(a%2==0) even++; else odd++;
  }

  while(odd > even) odd -= 2, even++;
  if(even > odd+1) even = odd + 1;
  cout<<even+odd<<"\n";
}

int main(){
  ios_base::sync_with_stdio(0); cin.tie(0);
  int t = 1;
  // cin>>t;
  while(t--) f();
  return 0;
}