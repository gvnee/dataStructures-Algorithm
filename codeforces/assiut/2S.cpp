#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define sz(x) int((x).size())
#define pb push_back

void f(){
  int a, b;
  cin>>a>>b;
  int mn = min(a, b);
  int mx = max(a, b);
  ll total = 0;
  for(int i = mn+1;i<mx;i++){
    if(i % 2) total+=i;
  }
  cout<<total<<"\n";
}

int main(){
  cin.tie(0); ios_base::sync_with_stdio(0);
  int t = 1;
  cin>>t;
  while(t--) f();
  return 0;
}