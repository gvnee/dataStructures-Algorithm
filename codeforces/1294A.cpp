#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define sz(x) int((x).size())
#define pb push_back

void f(){
  ll a[3], n;
  cin>>a[0]>>a[1]>>a[2]>>n;
  sort(a, a+3);
  for(int i = 0;i<3;i++){
    n -= a[2] - a[i];
  }
  if(n<0) cout<<"NO\n";
  else if(n%3==0) cout<<"YES\n";
  else cout<<"NO\n";
}

int main(){
  cin.tie(0); ios_base::sync_with_stdio(0);
  int t = 1;
  cin>>t;
  while(t--) f();
  return 0;
}