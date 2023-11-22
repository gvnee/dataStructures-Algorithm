#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define sz(x) int((x).size())
#define pb push_back

void f(){
  int n, k; cin>>n>>k;
  vector<int> a(n);
  for(int &i:a) cin>>i;
  sort(a.begin(), a.end());
  reverse(a.begin(), a.end());
  ll r = 0;
  for(int i = 0;i<k;i++){
    if(a[i] < 0) break;
    r += a[i];
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