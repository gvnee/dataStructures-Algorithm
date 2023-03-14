#include <bits/stdc++.h>
using namespace std;
using ll = long long;

const int MOD = int(1e9) + 7;
double PI = atan(1)*4;
int temp;

void f(){
  int n, m, k;
  cin>>n>>m>>k;
  int a[n], b[m];
  for(int i = 0;i<n;i++) cin>>a[i];
  for(int i = 0;i<m;i++) cin>>b[i];
  sort(a, a+n);
  sort(b, b+m);
  int p = 0, q = 0;
  int res = 0;
  while(p<n && q<m){
    if(a[p] >= b[q]-k && a[p] <= b[q]+k){
      res++;
      p++;
      q++;
    }
    else if(a[p] > b[q]+k) q++;
    else p++;
  }
  cout<<res;
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