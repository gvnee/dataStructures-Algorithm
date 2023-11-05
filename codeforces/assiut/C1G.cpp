#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define sz(x) int((x).size())
#define pb push_back

void f(){
  ll eye, mouth, body;
  cin>>eye>>mouth>>body;
  ll res = 0;
  ll mn = min({mouth, eye, body});
  eye -= mn;
  body -= mn;
  res += min(eye/2, body) + mn;
  cout<<res<<"\n";
}

int main(){
  cin.tie(0); ios_base::sync_with_stdio(0);
  int t = 1;
  // cin>>t;
  while(t--) f();
  return 0;
}