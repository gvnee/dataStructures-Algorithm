#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define sz(x) int((x).size())
#define pb push_back

void f(){
  string a, b; cin>>a>>b;
  int i;
  for(i = 0;i<sz(a);i++){
    cout<<a[i];
    if(i<sz(b)) cout<<b[i];
  }
  while(i<sz(b)){
    cout<<b[i];
    i++;
  }
  cout<<"\n";
}

int main(){
  cin.tie(0); ios_base::sync_with_stdio(0);
  int t = 1;
  cin>>t;
  while(t--) f();
  return 0;
}