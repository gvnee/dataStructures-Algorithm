#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define sz(x) int((x).size())
#define debug(x) cerr<<#x<<": "<<(x)<<"\n"
#define pb push_back

void f(){
  int n, m, a, b;
  cin>>n>>m>>a>>b;
  int case1 = n * a;
  int case2 = (n/m) * b + (n%m) * a;
  int case3 = (n/m) * b;
  if(n%m != 0){
    case3 += b;
  }
  cout<<min(min(case1, case2), case3)<<"\n";
}

int main(){
  ios_base::sync_with_stdio(0); cin.tie(0);
  int t = 1;
  // cin>>t;
  while(t--) f();
  return 0;
}