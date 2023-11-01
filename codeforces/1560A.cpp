#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define sz(x) int((x).size())
#define debug(x) cerr<<#x<<": "<<(x)<<"\n"
#define pb push_back

void f(){
  int n;
  cin>>n;
  vector<int> v;
  v.pb(0);
  int i = 1;
  for(;;){
    int d = i % 10;
    if(i % 3 != 0 && d != 3){
      v.pb(i);
    }
    i++;
    if(sz(v) > n) break;
  }
  cout<<v[n]<<"\n";
}

int main(){
  cin.tie(0); ios_base::sync_with_stdio(0);
  int t = 1;
  cin>>t;
  while(t--) f();
  return 0;
}