#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define sz(x) int((x).size())
#define debug(x) cerr<<#x<<": "<<(x)<<"\n"
int n;
const int mxn = 100000010;
short int freq[mxn+1] = {};

ll sum(int i){
  ll s = 0LL;
  while(i!=0){
    s += freq[i];
    i &= ~(i&-i);
  }
  return s;
}

void add(int i){
  while(i<=mxn){
    freq[i]++;
    i += i & -i;
  }
}

void f(){
  cin>>n;
  ll a[n];
  for(int i = 0;i<n;i++) cin>>a[i];
  vector<ll> res;
  for(int i = n-1;i>=0;i--){
    res.push_back(sum(mxn) - sum(a[i]));
    add(a[i]);
  }
  for(int i = sz(res)-1;i>=0;i--) cout<<res[i]<<" ";
}

int main(){
  ios_base::sync_with_stdio(0); cin.tie(0);
  int t = 1;
  // cin>>t;
  while(t--) f();
  return 0;
}