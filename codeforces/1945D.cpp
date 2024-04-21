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
  int n, m;
  cin>>n>>m;
  vector<int> a(n+1), b(n+1);
  for(int i = 1;i<=n;i++){
    cin>>a[i];
  }
  reverse(all(a));
  ll pre[n+1] = {};
  for(int i = 1;i<=n;i++){
    cin>>b[i];
  }
  reverse(all(b));
  for(int i = 1;i<=n;i++){
    pre[i] += pre[i-1] + b[i];
  }
  ll mn = LLONG_MAX;
  for(int i = n;i<=n;i++){
    mn = min(mn, a[i] + pre[i]);
  }
  cout<<mn<<"\n";
}

int main(){
  cin.tie(0); ios_base::sync_with_stdio(0);
  int t = 1;
  cin>>t;
  while(t--) f();
  return 0;
}