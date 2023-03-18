#include <bits/stdc++.h>
using namespace std;

using ll = long long;

#define debug(x) cerr<<#x<<": "<<(x)<<"\n"

const int MOD = int(1e9) + 7;
double PI = atan(1)*4;
int temp;

void f(){
  int n, m;
  cin>>n;
  ll a[n];
  for(int i = 0;i<n;i++) cin>>a[i];
  cin>>m;
  ll b[m];
  for(int i = 0;i<m;i++) cin>>b[i];
  sort(a, a+n);
  sort(b, b+m);
  int x = 0, y = 0;

  int previous = -1;

  while(x<n || y<m){
    if(a[x] != b[y]){
      if(previous != b[y]) cout<<b[y]<<' ';
      previous = b[y];
      y++;
    }
    else{
      x++;
      y++;
    }
  }
  cout<<"\n";
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