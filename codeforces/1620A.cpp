#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define sz(x) int((x).size())
#define pb push_back

void f(){
  string s;
  cin>>s;
  int n = 0;
  for(char c:s) if(c == 'N') n++;
  if(n == 1) cout<<"NO\n";
  else cout<<"YES\n";
}

int main(){
  cin.tie(0); ios_base::sync_with_stdio(0);
  int t = 1;
  cin>>t;
  while(t--) f();
  return 0;
}