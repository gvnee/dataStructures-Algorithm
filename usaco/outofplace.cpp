#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define sz(x) int((x).size())
#define debug(x) cerr<<#x<<": "<<(x)<<"\n"
#define pb push_back

void f(){
  int n;
  cin>>n;
  int a[n], s[n];
  for(int i = 0;i<n;i++){
    cin>>a[i];
    s[i] = a[i];
  }
  sort(s, s+n);
  int res = 0;
  for(int i = 0;i<n;i++) if(a[i] != s[i]) res++;
  cout<<max(0, res-1)<<"\n";
}

int main(){
  ios_base::sync_with_stdio(0); cin.tie(0);
  // freopen("outofplace.in", "r", stdin);
  // freopen("outofplace.out", "w", stdout);
  int t = 1;
  // cin>>t;
  while(t--) f();
  return 0;
}