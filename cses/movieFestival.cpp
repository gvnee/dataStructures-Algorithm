#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define sz(x) int((x).size())
#define pb push_back

void f(){
  int n;
  cin>>n;
  vector<pair<int, int>> a(n);
  int x, y;
  for(int i = 0;i<n;i++){
    cin>>x>>y;
    a[i] = {y, x};
  }
  sort(a.begin(), a.end());
  int res = 1;
  for(int i = 1;i<n;i++){
    if(a[i].second <= a[i-1].second) res++;
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