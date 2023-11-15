#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define sz(x) int((x).size())
#define pb push_back

void f(){
  int n;
  cin>>n;
  ll a[n];
  for(int i = 0;i<n;i++){
    cin>>a[i];
  }
  ll res = INT_MAX;
  for(int i = 0;i<n;i++){
    for(int j = i+1;j<n;j++){
      res = min(res, a[i] + a[j] + j - i);
    }
  }
  cout<<res<<"\n";
}

int main(){
  cin.tie(0); ios_base::sync_with_stdio(0);
  int t = 1;
  cin>>t;
  while(t--) f();
  return 0;
}