#include<bits/stdc++.h>
using namespace std;

#define F first
#define S second
#define pb push_back
#define int long long
#define pi pair<int,int>
#define sz(x) int((x).size())
#define all(x) x.begin(), x.end()

void f(){
  int n; cin>>n;
  int a[n];
  for(int i = 0;i<n;i++) cin>>a[i];
  sort(a, a+n);

  int line = 0;
  for(int i = n-1;i>=0;i--){
    if(a[i]>=line) line++;
  }
  cout<<line<<"\n";
}

signed main(){
  cin.tie(0); ios::sync_with_stdio(0);

  freopen("lemonade.in", "r", stdin);
  freopen("lemonade.out", "w", stdout);
  
  int t = 1;
  // cin>>t;
  while(t--) f();
  return 0;
}
