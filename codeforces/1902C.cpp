#include<bits/stdc++.h>
using namespace std;

#define all(x) x.begin(), x.end()
#define sz(x) int((x).size())
typedef pair<int,int> pi;
typedef long long ll;
#define pb push_back
#define S second
#define F first

void f(){
  int n; cin>>n;
  int a[n];
  for(int i = 0;i<n;i++) cin>>a[i];
  if(n == 1){
    cout<<1<<"\n";
    return;
  }
  sort(a, a+n);
  int mx = a[n-1];
  vector<int> gap;
  for(int i = 0;i<n-1;i++){
    gap.pb(mx - a[i]);
  }
  int need = gap[0];
  for(int x:gap) need = __gcd(x, need);
  ll res = 0;
  for(int x:gap) {
    res += x / need;
  }
  ll cur = mx - need;
  bool found = false;
  for(int i = n-2;i>=0;i--){
    if(a[i] != cur){
      res += (mx - cur)/need;
      found = true;
      break;
    }
    cur -= need;
  }
  if(!found){
    res += n;
  }
  
  cout<<res<<"\n";
}

int main(){
  cin.tie(0); ios_base::sync_with_stdio(0);
  int t = 1;
  cin>>t;
  while(t--) f();
  return 0;
}