#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define sz(x) int((x).size())
#define pb push_back

void f(){
  int n;
  cin>>n;
  int a[n];
  for(int i = 0;i<n;i++) cin>>a[i];
  int c = 1;
  int res = -1;
  for(int i = 1;i<n;i++){
    if(a[i]>=a[i-1]) c++;
    else c = 1;
    res = max(res, c);
  }
  res = max(res, c);
  cout<<res<<"\n";
}

int main(){
  cin.tie(0); ios_base::sync_with_stdio(0);
  int t = 1;
  // cin>>t;
  while(t--) f();
  return 0;
}