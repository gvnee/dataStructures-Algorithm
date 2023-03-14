// BerSU Ball
#include <bits/stdc++.h>
using namespace std;
using ll = long long;

const int MOD = int(1e9) + 7;
double PI = atan(1)*4;
int temp;

void f(){
  int n, m;
  cin>>n;
  int a[n];
  for(int i = 0;i<n;i++) cin>>a[i];
  cin>>m;
  int b[m];
  for(int i = 0;i<m;i++) cin>>b[i];

  sort(a, a+n);
  sort(b, b+m);

  int p1 = 0, p2 = 0;

  int res = 0;
  
  while(p1 < n && p2 < m){
    if(abs(a[p1] - b[p2]) <= 1){
      res++;
      p1++;
      p2++;
    }
    else if(a[p1] > b[p2]) p2++;
    else if(a[p1] < b[p2]) p1++;
  }
  cout<<res<<"\n";
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