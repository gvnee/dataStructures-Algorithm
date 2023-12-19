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
  int a[n], b[n];
  ll pre[n] = {};
  for(int i = 0;i<n;i++){
    cin>>a[i];
    pre[i] = a[i];
    if(i != 0) pre[i] += pre[i-1];
  }
  int mx[n] = {};
  for(int i = 0;i<n;i++){
    cin>>b[i];
    if(i!=0) mx[i] = max(b[i], mx[i-1]);
    else mx[i] = b[i];
  }
  ll res = 0;
  for(int i = 0;i<min(n, k);i++){
    res = max(pre[i] + mx[i] * max(0, k - i - 1), res);
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