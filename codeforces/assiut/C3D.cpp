#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define sz(x) int((x).size())
#define pb push_back

void f(){
  int n; cin>>n;
  int a[n];
  int c[1001] = {};
  for(int i = 0;i<n;i++){
    cin>>a[i];
    c[a[i]]++;
  }
  ll r = 0;
  for(int i = 0;i<1000;i++){
    if(c[i+1]) r += c[i];
  }
  cout<<r<<"\n";
}

int main(){
  cin.tie(0); ios_base::sync_with_stdio(0);
  int t = 1;
  // cin>>t;
  while(t--) f();
  return 0;
}