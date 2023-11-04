#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define sz(x) int((x).size())
#define debug(x) cerr<<#x<<": "<<(x)<<"\n"
#define pb push_back

void f(){
  vector<int> a(3), s;
  for(int &i:a) cin>>i;
  s = a;
  sort(s.begin(), s.end());
  for(int i:s) cout<<i<<"\n";
  cout<<"\n";
  for(int i:a) cout<<i<<"\n";
}

int main(){
  cin.tie(0); ios_base::sync_with_stdio(0);
  int t = 1;
  // cin>>t;
  while(t--) f();
  return 0;
}