#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define sz(x) int((x).size())
#define debug(x) cerr<<#x<<": "<<(x)<<"\n"
#define pb push_back

void f(){
  int n, t;
  cin>>n>>t;
  int a[n];
  for(int i = 0;i<n;i++){
    cin>>a[i];
  }

  int l = 0, r = 0, cur = 0, len = 0, res = 0;
  while(r < n){
    cur += a[r];
    r++;
    len++;
    if(cur > t){
      cur -= a[l];
      l++;
      len--;
    }
    res = max(len, res);
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