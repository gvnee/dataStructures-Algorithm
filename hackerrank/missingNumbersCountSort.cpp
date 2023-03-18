#include <bits/stdc++.h>
using namespace std;

using ll = long long;

#define debug(x) cerr<<#x<<": "<<(x)<<"\n"

const int MOD = int(1e9) + 7;
double PI = atan(1)*4;
int temp;

int MxN = 100000;

void f(){
  int n, m;
  cin>>n;
  int freq[MxN] = {};
  for(int i = 0;i<n;i++){
    cin>>temp;
    freq[temp]++;
  }
  cin>>m;
  int freq2[MxN] = {};
  for(int i = 0;i<m;i++){
    cin>>temp;
    freq2[temp]++;
  }
  for(int i = 0;i<MxN;i++){
    if(freq[i] != freq2[i]) cout<<i<<' ';
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