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
  vector<ll> a(n), b(n);
  for(int i = 0;i<n;i++) cin>>a[i];
  b = a;
  ll res1 = 0, res2 = 0;
  for(int i = 0;i<n;i++){
    int next = i+1;
    if(next == n) next = 0;

    if(a[i] > a[next]){
      if(a[i]/2 >= a[next]){
        res1 += a[next];
        a[i] -= a[next] * 2;
        a[next] = 0;
      }
      else{
        res1 += a[i]/2;
        a[next] -= a[i]/2;
        a[i] %= 2;
      }
    }
  }
  a = b;
  for(int i = 1;i<n;i++){
    int next = i+1;
    if(next == n) next = 0;
    if(a[i] > a[next]){
      if(a[i]/2 >= a[next]){
        res2 += a[next];
        a[i] -= a[next] * 2;
        a[next] = 0;
      }
      else{
        res2 += a[i]/2;
        a[next] -= a[i]/2;
        a[i] %= 2;
      }
    }
  }
  cout<<max(res1, res2)<<"\n";
}

int main(){
  cin.tie(0); ios_base::sync_with_stdio(0);
  int t = 1;
  // cin>>t;
  while(t--) f();
  return 0;
}