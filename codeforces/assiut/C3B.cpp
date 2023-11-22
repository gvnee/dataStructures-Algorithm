#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define sz(x) int((x).size())
#define pb push_back

void f(){
  int n; cin>>n;
  vector<int> a;
  for(int i = 0;i<n;i++){
    int t; cin>>t;
    if(t == 0) reverse(a.begin(), a.end());
    a.pb(t);
  }
  for(int i:a) cout<<i<<" ";
}

int main(){
  cin.tie(0); ios_base::sync_with_stdio(0);
  int t = 1;
  // cin>>t;
  while(t--) f();
  return 0;
}