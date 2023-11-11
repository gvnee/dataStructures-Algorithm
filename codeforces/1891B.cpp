#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define sz(x) int((x).size())
#define pb push_back

void f(){
  int n, q, t;
  cin>>n>>q;
  ll a[n];
  bool p[31] = {};
  for(int i = 0;i<n;i++){
    cin>>a[i];
  }
  vector<int> v;
  for(int i = 0;i<q;i++){
    cin>>t;
    if(p[t]) continue;
    p[t] = true;
    v.pb(t);
  }
  for(int i = 0;i<n;i++){
    for(int x:v){
      if(a[i] % (1<<x) == 0) a[i] += 1<<(x-1);
    }
    cout<<a[i]<<" ";
  }
  cout<<"\n";
} 

int main(){
  cin.tie(0); ios_base::sync_with_stdio(0);
  int t = 1;
  cin>>t;
  while(t--) f();
  return 0;
}