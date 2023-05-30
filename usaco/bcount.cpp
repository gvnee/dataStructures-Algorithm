#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define sz(x) int((x).size())
#define debug(x) cerr<<#x<<": "<<(x)<<"\n"
#define pb push_back

void f(){
  int n, q;
  cin>>n>>q;
  int tmp;
  ll a[n+1] = {};
  ll b[n+1] = {};
  ll c[n+1] = {};
  for(int i = 1;i<=n;i++){
    cin>>tmp;
    if(tmp == 1) a[i] = 1;
    if(tmp == 2) b[i] = 1;
    if(tmp == 3) c[i] = 1;
    a[i] += a[i-1];
    b[i] += b[i-1];
    c[i] += c[i-1];
  }

  // for(int i = 0;i<=n;i++) cout<<a[i]<<" \n"[i==n];
  // for(int i = 0;i<=n;i++) cout<<b[i]<<" \n"[i==n];
  // for(int i = 0;i<=n;i++) cout<<c[i]<<" \n"[i==n];
  
  int l, r;
  while(q--){
    cin>>l>>r;
    l--;
    cout<<a[r] - a[l]<<' ';
    cout<<b[r] - b[l]<<' ';
    cout<<c[r] - c[l]<<'\n';
  }
}

int main(){
  ios_base::sync_with_stdio(0); cin.tie(0);
  int t = 1;
  freopen("bcount.in", "r", stdin);
  freopen("bcount.out", "w", stdout);
  // cin>>t;
  while(t--) f();
  return 0;
}