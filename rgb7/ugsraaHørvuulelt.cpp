#include<bits/stdc++.h>
using namespace std;

#define all(x) (x.begin(), x.end())
#define sz(x) int((x).size())
#define pii pair<int, int>
typedef long long ll;
#define pb push_back
#define S second
#define F first

void f(){
  int n, a, b, c, d;
  cin>>n>>a>>b>>c>>d;
  a--, c--;
  vector<int> v(n);
  for(int i = 0;i<n;i++) v[i] = i;
  reverse(v.begin() + a, v.begin() + b);
  reverse(v.begin() + c, v.begin() + d);
  for(int x:v) cout<<x+1<<" ";
}

int main(){
  cin.tie(0); ios_base::sync_with_stdio(0);
  int t = 1;
  // cin>>t;
  while(t--) f();
  return 0;
}