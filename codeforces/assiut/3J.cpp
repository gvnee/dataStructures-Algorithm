#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define sz(x) int((x).size())
#define pb push_back

void f(){
  int n;
  cin>>n;
  int a[n];
  int mn = INT_MAX;
  for(int i = 0;i<n;i++){
    cin>>a[i];
    mn = min(mn, a[i]);
  }
  int c = count(a, a+n, mn);
  if(c%2) cout<<"Lucky\n";
  else cout<<"Unlucky\n";
}

int main(){
  cin.tie(0); ios_base::sync_with_stdio(0);
  int t = 1;
  // cin>>t;
  while(t--) f();
  return 0;
}