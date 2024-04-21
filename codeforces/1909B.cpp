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
  ll a[n];
  for(int i = 0;i<n;i++){
    cin>>a[i];
  }
  for(int m = 2;m < 10000;m++){
    ll b[n];
    for(int i = 0;i<n;i++){
      b[i] = a[i] % m;
    }
    sort(b, b+n);
    ll cur = b[0];
    int d = 0;
    for(int i = 1;i<n;i++){
      if(cur != b[i]){
        cur = b[i];
        d++;
      }
    }
    if(d == 1){
      cout<<m<<"\n";
      // for(int i = 0;i<n;i++){
      //   cout<<b[i]<<" ";
      // }
      // cout<<"\n";
    }
  }
}

int main(){
  cin.tie(0); ios_base::sync_with_stdio(0);
  int t = 1;
  cin>>t;
  while(t--) f();
  return 0;
}