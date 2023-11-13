#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define sz(x) int((x).size())
#define pb push_back

void f(){
  int n, t;
  cin>>n>>t;
  int a[n+1];
  for(int i = 1;i<n;i++){
    cin>>a[i];
  }
  int cur = 1;
  while(cur<=n){
    cur += a[cur];
    if(cur == t){
      cout<<"YES\n";
      return;
    }
  }
  cout<<"NO\n";
}

int main(){
  cin.tie(0); ios_base::sync_with_stdio(0);
  int t = 1;
  // cin>>t;
  while(t--) f();
  return 0;
}