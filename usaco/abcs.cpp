#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define debug(x) cerr<<#x<<": "<<(x)<<"\n"

const int MOD = int(1e9) + 7;
double PI = atan(1)*4;
int temp;

void f(){
  ll arr[7];
  for(int i = 0;i<7;i++){
    cin>>arr[i];
  }
  sort(arr, arr+7);
  ll a, b, abc;
  abc = arr[6];
  a = arr[0];
  b = arr[1];
  cout<<a<<' ';
  cout<<b<<' ';
  cout<<(abc - a - b);
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