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
  bool u = 0, d = 0, l = 0, r = 0;
  for(int i = 0;i<n;i++){
    int x, y; cin>>x>>y;
    if(y > 0) u = 1;
    if(y < 0) d = 1;
    if(x > 0) l = 1;
    if(x < 0) r = 1;
  }
  if(u && d && l && r) cout<<"No\n";
  else cout<<"yes\n";
}

int main(){
  cin.tie(0); ios_base::sync_with_stdio(0);
  int t = 1;
  cin>>t;
  while(t--) f();
  return 0;
}