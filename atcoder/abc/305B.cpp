#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define sz(x) int((x).size())
#define pb push_back

void f(){
  char a, b; cin>>a>>b;
  if(a>b) swap(a, b);
  int r[] = {3, 1, 4, 1, 5, 9};
  int res = 0;
  for(int i = a-'A';i<b-'A';i++) res+=r[i];
  cout<<res<<"\n";
}

int main(){
  cin.tie(0); ios_base::sync_with_stdio(0);
  int t = 1;
  // cin>>t;
  while(t--) f();
  return 0;
}