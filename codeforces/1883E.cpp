#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define sz(x) int((x).size())
#define pb push_back

void f(){
  int n;
  cin>>n;
  ll a[n+1] = {};
  ll res = 0;
  for(int i = 1;i<=n;i++){
    cin>>a[i];
    if(a[i] < a[i-1]){
      int need = log2(a[i-1]) - log2(a[i]);
      cout<<need<<" ";
      res += need;
      a[i] *= 1<<need;
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