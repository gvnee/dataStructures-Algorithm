#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define sz(x) int((x).size())
#define pb push_back

void f(){
  double n, k, a;
  cin>>n>>k>>a;
  double res = n*k/a;
  if(floor(res) != res) cout<<"double";
  else if(INT_MIN<=res && res<=INT_MAX) cout<<"int";
  else cout<<"long long";
}

int main(){
  cin.tie(0); ios_base::sync_with_stdio(0);
  int t = 1;
  // cin>>t;
  while(t--) f();
  return 0;
}