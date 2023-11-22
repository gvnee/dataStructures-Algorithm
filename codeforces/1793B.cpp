#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define sz(x) int((x).size())
#define pb push_back

void f(){
  ll x, y;
  cin>>x>>y;
  cout<<(x-y) * 2<<"\n";
  for(int i = y;i<=x;i++){
    cout<<i<<" ";
  }
  for(int i = x-1;i>y;i--){
    cout<<i<<" ";
  }
  cout<<"\n";
}

int main(){
  cin.tie(0); ios_base::sync_with_stdio(0);
  int t = 1;
  cin>>t;
  while(t--) f();
  return 0;
}