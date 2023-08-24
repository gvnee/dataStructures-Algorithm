#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define sz(x) int((x).size())
#define debug(x) cerr<<#x<<": "<<(x)<<"\n"
#define pb push_back

const int mxn = 100069;

void f(){
  int n;
  cin>>n;
  ll r[mxn] = {};
  ll p[mxn] = {};
  ll s[mxn] = {};
  char c;
  for(int i = 1;i<=n;i++){
    cin>>c;
    if(c == 'H') r[i]++;
    else if(c == 'P') p[i]++;
    else s[i]++;
    r[i] += r[i-1];
    p[i] += p[i-1];
    s[i] += s[i-1];
  }
  ll maxprefix = 0, maxsuffix = 0;
  ll res = 0;

  for(int i = 1;i<=n;i++){
    maxprefix = max(p[i], max(r[i], s[i]));
    maxsuffix = max(r[n]-r[i], max(p[n]-p[i], s[n]-s[i]));
    res = max(res, maxprefix + maxsuffix);
  }
  
  cout<<res<<"\n";
}

int main(){
  cin.tie(0); ios_base::sync_with_stdio(0);
  int t = 1;
  // cin>>t;
  freopen("hps.in", "r", stdin);
  freopen("hps.out", "w", stdout);
  while(t--) f();
  return 0;
}