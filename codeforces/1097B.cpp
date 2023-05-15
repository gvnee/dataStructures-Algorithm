#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define sz(x) int((x).size())
#define debug(x) cerr<<#x<<": "<<(x)<<"\n"
#define pb push_back

void f(){
  int n;
  cin>>n;
  int a[n];
  for(int i = 0;i<n;i++){
    cin>>a[i];
  }
  for(int mask = 0;mask<1<<n;mask++){
    int cur = 0;
    for(int i = 0;i<n;i++){
      if(mask & (1<<i)) cur -= a[i];
      else cur += a[i];
    }
    if(cur%360 == 0){
      cout<<"YES\n";
      return;
    }
  }
  cout<<"NO\n";
}

int main(){
  ios_base::sync_with_stdio(0); cin.tie(0);
  int t = 1;
  // cin>>t;
  while(t--) f();
  return 0;
}