#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define sz(x) int((x).size())
#define pb push_back

const int MXN = 1e3+5;
bool np[MXN+1] = {};

void sieve(){
  for(int i = 2;i*i<=MXN;i++){
    if(np[i]) continue;
    for(int j = i*i;j<=MXN;j+=i){
      np[j] = true;
    }
  }
}

void f(){
  int n;
  cin>>n;
  for(int i = 2;i<=n;i++){
    if(!np[i]) cout<<i<<" ";
  }
}

int main(){
  cin.tie(0); ios_base::sync_with_stdio(0);
  sieve();
  int t = 1;
  // cin>>t;
  while(t--) f();
  return 0;
}