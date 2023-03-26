#include <bits/stdc++.h>
using namespace std;

#define ll long long

#define debug(x) cerr<<#x<<": "<<(x)<<"\n"

const int MOD = int(1e9) + 7;
double PI = atan(1)*4;
int temp;

void f(){
  int n;
  cin>>n;
  int arr[7];
  for(int i = 0;i<7;i++){
    cin>>arr[i];
  }
  while(true){
    for(int i = 0;i<7;i++){
      n -= arr[i];
      if(n <= 0){
        cout<<i+1<<"\n";
        return;
      }
    }
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