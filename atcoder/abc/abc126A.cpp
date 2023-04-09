#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define DEBUG(x) cerr<<#x<<": "<<(x)<<endl

const int MOD = int(1e9) + 7;
double PI = atan(1)*4;
int temp;

void f(){
  int n, k;
  cin>>n>>k;
  string str;
  cin>>str;
  DEBUG(n);
  str[k-1] += 'a' - 'A';
  cout<<str<<"\n";
}

int main(){
  
  ios_base::sync_with_stdio(false); cin.tie(nullptr);
  #ifndef ONLINE_JUDGE
    // freopen("input.in", "r", stdin);
  #endif

  int t = 1;
  // cin>>t;
  while(t--) f();
  
  return 0;
}