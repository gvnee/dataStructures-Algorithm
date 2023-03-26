#include <bits/stdc++.h>
using namespace std;

#define ll long long

#define debug(x) cerr<<#x<<": "<<(x)<<"\n"

const int MOD = int(1e9) + 7;
double PI = atan(1)*4;
int temp;

void f(){
  int n, m;
  cin>>n>>m;
  for(int i = 0;i<n;i++){
    for(int j = 0;j<m;j++){
      if((n+m)%2==1){
        if((i+j)%2==1) cout<<'#';
        else cout<<'_';
      }
      else{
        if((i+j)%2==0) cout<<'#';
        else cout<<'_';
      }

    }
    cout<<"\n";
  }
}

int main(){
  
  ios_base::sync_with_stdio(false); cin.tie(nullptr);
  #ifndef ONLINE_JUDGE
    freopen("input.in", "r", stdin);
  #endif

  int t = 1;
  // cin>>t;
  while(t--) f();
  
  return 0;
}