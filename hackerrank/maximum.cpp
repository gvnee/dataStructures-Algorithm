#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define sz(x) int((x).size())
#define debug(x) cerr<<#x<<": "<<(x)<<"\n"

const int MOD = int(1e9) + 7;
double PI = atan(1)*4;
int temp;

void f(){
  int n;
  cin>>n;
  vector<ll> a(n), b(n);

  ll xa = 0, xb = 0;

  for(int i = 0;i<n;i++){
    cin>>a[i];
    xa ^= a[i];
  }
  for(int i = 0;i<n;i++){
    cin>>b[i];
    xb ^= b[i];
  }
  ll res = xa + xb;
  vector<int> v;
  int c = 0;
  for(int i = 0;i<n;i++){
    if((xa ^ a[i] ^ b[i]) + (xb ^ a[i] ^ b[i]) > res){
      c++;
      v.push_back(i+1);
      xa ^= a[i] ^ b[i];
      xb ^= a[i] ^ b[i];
      res = xa + xb;
    }
  }

  cout<<res<<' '<<c<<"\n";
  for(int x:v) cout<<x<<" ";
  cout<<"\n";
}

int main(){
  
  ios_base::sync_with_stdio(false); cin.tie(nullptr);

  int t = 1;
  // cin>>t;
  while(t--) f();
  
  return 0;
}