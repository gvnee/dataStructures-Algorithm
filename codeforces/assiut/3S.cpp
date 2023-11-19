#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define sz(x) int((x).size())
#define pb push_back

const int MXN = 1e5+1;

void f(){
  int n, m;
  cin>>n>>m;
  bool b[MXN] = {};
  for(int i = 0;i<n;i++){
    for(int j = 0;j<m;j++){
      int t;
      cin>>t;
      b[t] = true;
    }
  }
  int x;
  cin>>x;
  if(b[x]) cout<<"will not take number\n";
  else cout<<"will take number\n";
}

int main(){
  cin.tie(0); ios_base::sync_with_stdio(0);
  int t = 1;
  // cin>>t;
  while(t--) f();
  return 0;
}