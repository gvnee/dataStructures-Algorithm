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
  ll suf[n] = {};
  int a[n], o[n];
  for(int i = 0;i<n;i++){
    cin>>a[i];
    o[i] = a[i];
  }
  sort(a, a+n);
  for(int i = n-1;i>=0;i--){
    if(i == n-1) suf[i] = a[n-1];
    else suf[i] = suf[i+1] + a[i];
  }
  for(int i = 0;i<n;i++){
    auto it = upper_bound(a, a+n, o[i]);
    int index = distance(a, it);
    if(it == a+n) cout<<"0 ";
    else cout<<suf[index]<<" ";
  }
}

int main(){
  cin.tie(0); ios_base::sync_with_stdio(0);
  int t = 1;
  // cin>>t;
  while(t--) f();
  return 0;
}