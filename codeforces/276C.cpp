#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<pair<ll, ll>> vll;
typedef vector<pair<int, int>> vii;

#define sz(x) int((x).size())
#define pb push_back
#define ff first
#define ss second

const int MXN = 2e5;
int qsum[MXN+1] = {};

void f(){
  int n, m;
  cin>>n>>m;
  int a[n+1];
  vector<pair<int, int>> q(m+1);
  for(int i = 1;i<=n;i++){
    cin>>a[i];
  }
  int l, r;
  for(int i = 1;i<=m;i++){
    cin>>l>>r;

    qsum[l]++;
    qsum[r+1]--;
    
    q[i] = {l, r};
  }
  ll cur = 0;
  vector<pair<ll, int>> freq(n+1);
  for(int i = 1;i<=n;i++){
    cur += qsum[i];
    freq[i].ff = cur;
    freq[i].ss = i;
  }

  sort(freq.begin(), freq.end());
  sort(a+1, a+n+1);
  
  // ll res[n+1] = {};
  ll sum = 0;
  for(int i = 1;i<=n;i++){
    // int index = freq[i].ss;
    sum += a[i] * freq[i].ff;
    // res[index] = a[i];
  }
  // for(int i = 1;i<=n;i++){
  //   res[i] += res[i-1];
  // }
  // ll sum = 0;
  // for(auto [l, r]:q){
  //   if(r == 0) continue;
  //   sum += res[r] - res[l-1];
  // }
  cout<<sum<<"\n";
}

int main(){
  cin.tie(0); ios_base::sync_with_stdio(0);
  int t = 1;
  // cin>>t;
  while(t--) f();
  return 0;
}