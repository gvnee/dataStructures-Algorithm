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
  int a[3];
  for(int i = 0;i<3;i++) cin>>a[i];
  sort(a, a+3);
  int res = a[0];
  a[1] -= a[0];
  a[2] -= a[0];

  int x = -(a[2]-2*a[1])/3;
  int y = a[1]-2*x;

  if(x == 0 || y == 0) cout<<res<<"\n";
  else cout<<res + x + y<<"\n";
  cout<<x<<"\n";
  cout<<y<<"\n";
}

int main(){
  cin.tie(0); ios_base::sync_with_stdio(0);
  int t = 1;
  // cin>>t;
  while(t--) f();
  return 0;
}