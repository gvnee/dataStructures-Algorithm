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
  vector<int> arr(n);
  for(int i = 0;i<n;i++){
    cin>>arr[i];
  }
  for(int i = 0;i<256;i++){
    vector<int> c = arr;
    for(int j = 0;j<n;j++){
      c[j] ^= i;
    }
    for(int j = 1;j<n;j++) c[j] ^= c[j-1];
    if(c[n-1] == 0) {
      cout<<i<<"\n";
      return;
    }
  }
  cout<<-1<<"\n";
  
}

int main(){
  
  ios_base::sync_with_stdio(false); cin.tie(nullptr);

  int t = 1;
  cin>>t;
  while(t--) f();
  
  return 0;
}