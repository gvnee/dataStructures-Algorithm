#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define sz(x) int((x).size())
#define pb push_back

void f(){
  int n;
  cin>>n;
  int a[n+1];
  for(int i = 1;i<=n;i++){
    cin>>a[i];
  }
  int prev = 0;
  for(int m = 1;m<=n;m*=2){
    for(int i = prev+2;i<=m && i<=n;i++){
      if(a[i]<a[i-1]){
        cout<<"NO\n";
        return;
      }
    }
    prev = m;
  }
  for(int i = prev+2;i<=n;i++){
    if(a[i]<a[i-1]){
      cout<<"NO\n";
      return;
    }
  }
  cout<<"YES\n";
}

int main(){
  cin.tie(0); ios_base::sync_with_stdio(0);
  int t = 1;
  cin>>t;
  while(t--) f();
  return 0;
}