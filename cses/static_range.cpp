#include <bits/stdc++.h>
using namespace std;
using ll = long long;

const int MOD = int(1e9) + 7;
double PI = atan(1)*4;
int temp;

void f(){
  int n, q;
  cin>>n>>q;
  ll a[n];
  for(int i = 0;i<n;i++){
    cin>>temp;
    if(i == 0){
      a[i] = temp;
      continue;
    }
    a[i] = a[i-1] + temp;
  }
  int l, r;
  while(q--){
    cin>>l>>r;
    if(l < 2) cout<<a[r-1]<<"\n";
    else
      cout<<a[r-1] - a[l-2]<<"\n";
  }
}

int main(){
  
  ios_base::sync_with_stdio(false); cin.tie(nullptr);
  #ifndef ONLINE_JUDGE
    freopen("input.in", "r", stdin);
  #endif

  int t = 1;
  // cin>>t;
  while(t--) f();
  
  return 0;
}