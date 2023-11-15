#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define sz(x) int((x).size())
#define pb push_back

void f(){
  int n;
  cin>>n;
  ll a = 0;
  int t;
  for(int i = 0;i<n;i++){
    cin>>t;
    a += t;
  }
  ll total = a;
  for(int i = 0;i<n-1;i++){
    cin>>t;
    a -= t;
  }
  cout<<a<<"\n";
  total -= a;
  for(int i = 0;i<n-2;i++){
    cin>>t;
    total -= t;
  }
  cout<<total<<"\n";
}

int main(){
  cin.tie(0); ios_base::sync_with_stdio(0);
  int t = 1;
  // cin>>t;
  while(t--) f();
  return 0;
}