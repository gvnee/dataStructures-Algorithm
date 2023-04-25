#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define sz(x) int((x).size())
#define debug(x) cerr<<#x<<": "<<(x)<<"\n"
#define pb push_back

void f(){
  int n, k;
  cin>>n>>k;
  int a;
  map<int, int> m;
  for(int i = 0;i<n;i++){
    cin>>a;
    if(m.count(k - a)){
      cout<<i+1<<" "<<m[k-a]<<"\n";
      return;
    }
    m[a] = i+1;
  }
  cout<<"IMPOSSIBLE\n";
}

int main(){
  ios_base::sync_with_stdio(0); cin.tie(0);
  int t = 1;
  // cin>>t;
  while(t--) f();
  return 0;
}