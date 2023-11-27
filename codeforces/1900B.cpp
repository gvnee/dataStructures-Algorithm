#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define sz(x) int((x).size())
#define pb push_back
#define F first
#define S second

void f(){
  int a, b, c;
  cin>>a>>b>>c;
  a %= 2;
  b %= 2;
  c %= 2;
  if(b == c) cout<<"1 ";
  else cout<<"0 ";
  if(a == c) cout<<"1 ";
  else cout<<"0 ";
  if(a == b) cout<<"1\n";
  else cout<<"0\n";
}

int main(){
  cin.tie(0); ios_base::sync_with_stdio(0);
  int t = 1;
  cin>>t;
  while(t--) f();
  return 0;
}


