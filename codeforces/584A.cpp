#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define sz(x) int((x).size())
#define pb push_back

void f(){
  int n, t;
  cin>>n>>t;

  if(t == 10){
    if(n == 1) cout<<"-1\n";
    else{
      for(int i = 1;i<n;i++) cout<<1;
      cout<<0<<"\n";
    }
  }
  else{
    for(int i = 1;i<=n;i++) cout<<t;
    cout<<"\n";
  }
}

int main(){
  cin.tie(0); ios_base::sync_with_stdio(0);
  int t = 1;
  // cin>>t;
  while(t--) f();
  return 0;
}