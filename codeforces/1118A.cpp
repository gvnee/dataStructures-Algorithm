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
  ll n, a, b; cin>>n>>a>>b;
  if(n % 2 == 0){
    cout<<min(n/2 * b, a*n)<<"\n";
  }
  else cout<<min({n/2*b + a, a*n})<<"\n";
}

int main(){
  cin.tie(0); ios_base::sync_with_stdio(0);
  int t = 1;
  cin>>t;
  while(t--) f();
  return 0;
}