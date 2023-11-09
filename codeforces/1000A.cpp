#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define sz(x) int((x).size())
#define pb push_back

void f(){
  int n;
  cin>>n;
  string a[n], b[n];
  for(int i = 0;i<n;i++) cin>>a[i];
  for(int i = 0;i<n;i++) cin>>b[i];
  sort(a, a+n);
  sort(b, b+n);
  
  ll res = 0;
  for(int i = 0;i<n;i++){
    for(int j = 0;j<sz(a[i]);j++){
      if(a[i][j] != b[i][j]) res++;
    }
  }
  cout<<res<<"\n";
}

int main(){
  cin.tie(0); ios_base::sync_with_stdio(0);
  int t = 1;
  // cin>>t;
  while(t--) f();
  return 0;
}