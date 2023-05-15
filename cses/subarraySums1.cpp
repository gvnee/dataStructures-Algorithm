#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define sz(x) int((x).size())
#define debug(x) cerr<<#x<<": "<<(x)<<"\n"
#define pb push_back

void f(){
  int n, x;
  cin>>n>>x;
  int a[n];
  for(int i = 0;i<n;i++){
    cin>>a[i];
  }

  int j = 0;
  int res = 0, cur = 0;
  for(int i = 0;i<n;i++){
    cur += a[i];
    while(cur >= x){
      if(cur == x) res++;
      cur -= a[j];
      j++;
    }
  }
  cout<<res<<"\n";
}

int main(){
  ios_base::sync_with_stdio(0); cin.tie(0);
  int t = 1;
  // cin>>t;
  while(t--) f();
  return 0;
}