#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define sz(x) int((x).size())
#define pb push_back

void f(){
  int n; cin>>n;
  int a[n];
  for(int i = 0;i<n;i++) cin>>a[i];

  int r = 0, r2 = 0;

  for(int i = 0;i<n;i++){
    if(i%2)
      if(a[i] > 0) r++;
      else r2++;
    else
      if(a[i] < 0) r++;
      else r2++;
  }
  cout<<min(r, r2);
}

int main(){
  cin.tie(0); ios_base::sync_with_stdio(0);
  int t = 1;
  // cin>>t;
  while(t--) f();
  return 0;
}