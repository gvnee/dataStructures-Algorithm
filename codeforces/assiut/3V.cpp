#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define sz(x) int((x).size())
#define pb push_back

void f(){
  int n, m;
  cin>>n>>m;
  int t, a[m+1] = {};
  for(int i = 0;i<n;i++){
    cin>>t;
    a[t]++;
  }
  for(int i = 1;i<=m;i++){
    cout<<a[i]<<"\n";
  }
}

int main(){
  cin.tie(0); ios_base::sync_with_stdio(0);
  int t = 1;
  // cin>>t;
  while(t--) f();
  return 0;
}