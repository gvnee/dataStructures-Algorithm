#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define sz(x) int((x).size())
#define pb push_back

void f(){
  int n, k;
  cin>>n>>k;
  int res = n;
  for(int i = 1;i*i<=n;i++){
    if(n%i==0){
      if(i<=k){
        res = min(res, n/i);
      }
      if(n/i<=k){
        res = min(res, i);
      }
    }
  }
  cout<<res<<"\n";
}

int main(){
  cin.tie(0); ios_base::sync_with_stdio(0);
  int t = 1;
  cin>>t;
  while(t--) f();
  return 0;
}