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
  int n, k; cin>>n>>k;
  int a[n];
  for(int i = 0;i<n;i++){
    cin>>a[i];
  }
  ll suf[n] = {};
  suf[n-1] = a[n-1];
  for(int i = n-2;i>=0;i--){
    suf[i] = suf[i+1] + a[i];
  }

  for(int i = 0;i<n;i++) cout<<suf[i]<<" ";
  sort(suf, suf+n);

  
  ll res = 0;
  for(int i = n-1;i>=0;i--){
    if(k==0) break;
    res += suf[i];
    k--;
  }
  cout<<res<<"\n";
}

int main(){
  cin.tie(0); ios_base::sync_with_stdio(0);
  int t = 1;
  // cin>>t;
  while(t--) f();
  return 0;
}