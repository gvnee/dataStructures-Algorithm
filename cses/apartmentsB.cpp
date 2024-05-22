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
  int n, m, k; cin>>n>>m>>k;
  int a[n], b[m];
  for(int i = 0;i<n;i++){
    cin>>a[i];
  }
  for(int i = 0;i<m;i++){
    cin>>b[i];
  }
  sort(a, a+n);
  sort(b, b+m);
  int res = 0;
  int x = 0, y = 0;
  while(x < n && y < m){
    if(a[x] >= b[y] - k && a[x] <=b[y]+k){
      res++;
      x++;
      y++;
    }
    else if(a[x] < b[y] - k){
      x++;
    }
    else y++;
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