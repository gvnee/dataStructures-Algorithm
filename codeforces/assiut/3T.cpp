#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define sz(x) int((x).size())
#define pb push_back

void f(){
  int n;
  cin>>n;
  ll a = 0, b = 0;
  for(int i = 0;i<n;i++){
    for(int j = 0;j<n;j++){
      int t;
      cin>>t;
      if(i == j) a += t;
      if(i + j == n-1) b += t;
    }
  }
  cout<<abs(a-b)<<"\n";
}

int main(){
  cin.tie(0); ios_base::sync_with_stdio(0);
  int t = 1;
  // cin>>t;
  while(t--) f();
  return 0;
}