#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define sz(x) int((x).size())
#define pb push_back

void f(){
  int n; cin>>n;
  int a[n];
  int o = 0, e = o;
  for(int i = 0;i<n;i++){
    cin>>a[i];
    if(a[i]%2) o++;
    else e++;
  }
  if(n%2) cout<<"-1\n";
  else cout<<abs(o-e)/2<<"\n";
}

int main(){
  cin.tie(0); ios_base::sync_with_stdio(0);
  int t = 1;
  cin>>t;
  while(t--) f();
  return 0;
}