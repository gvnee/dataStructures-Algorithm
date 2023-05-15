#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define sz(x) int((x).size())
#define debug(x) cerr<<#x<<": "<<(x)<<"\n"
#define pb push_back
const int mxb = 1e9+1;
bitset<mxb> b;
void f(){
  int n;
  cin>>n;
  for(int i = 0;i<n;i++){
    int a;
    cin>>a;
    b[a] = true;
  }
  cout<<b.count()<<"\n";
}

int main(){
  ios_base::sync_with_stdio(0); cin.tie(0);
  int t = 1;
  // cin>>t;
  while(t--) f();
  return 0;
}