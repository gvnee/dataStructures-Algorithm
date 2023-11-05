#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define sz(x) int((x).size())
#define pb push_back

void f(){
  string s;
  cin>>s;
  int a = s[0] - '0';
  int b = s[1] - '0';
  if(a == 0 || b == 0) cout<<"YES\n";
  else if(a%b == 0 || b%a==0) cout<<"YES\n";
  else cout<<"NO\n";
}

int main(){
  cin.tie(0); ios_base::sync_with_stdio(0);
  int t = 1;
  // cin>>t;
  while(t--) f();
  return 0;
}