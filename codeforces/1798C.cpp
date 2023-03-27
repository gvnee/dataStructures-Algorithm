#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define debug(x) cerr<<#x<<": "<<(x)<<"\n"

const int MOD = int(1e9) + 7;
double PI = atan(1)*4;
int temp;
const ll MxN = 5000001;
int freq[MxN] = {};

void f(){
  int n;
  cin>>n;
  ll q, price;
  for(int i = 0;i<n;i++){
    cin>>q>>price;
    for(int j = 1;j<sqrtl(q);j++){
      if(q%j==0){
        freq[q/j*price]++;
        if(q/j != j){
          freq[j]++;
        }
      }
    }
  }
  int res = n;
  sort(freq, freq+MxN);
  int ans = 0;
  for(int i = MxN-1;i>=0;i--){
    if(res<=0){
      cout<<ans<<" \n";
      return;
    }
    ans++;
    res -= freq[i];
  }
}

int main(){
  
  ios_base::sync_with_stdio(false); cin.tie(nullptr);
  #ifndef ONLINE_JUDGE
    freopen("input.in", "r", stdin);
  #endif

  int t = 1;
  cin>>t;
  while(t--) f();
  
  return 0;
}