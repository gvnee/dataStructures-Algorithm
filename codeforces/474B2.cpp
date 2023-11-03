#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define sz(x) int((x).size())
#define debug(x) cerr<<#x<<": "<<(x)<<"\n"
#define pb push_back

const int mxn = 2000005;
int a[mxn] = {};

void f(){
  int n;
  cin>>n;
  int t, c = 0, j;
  for(int i = 1;i<=n;i++){
    cin>>t;
    for(j = 0;j<t;j++){
      c++;
      a[c] = i;
    }
  }
  int q;
  cin>>q;
  while(q--){
    cin>>t;
    cout<<a[t]<<"\n";
  }
}

int main(){
  cin.tie(0); ios_base::sync_with_stdio(0);
  int t = 1;
  // cin>>t;
  while(t--) f();
  return 0;
}