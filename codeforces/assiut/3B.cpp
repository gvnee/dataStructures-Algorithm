#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define sz(x) int((x).size())
#define pb push_back

void f(){
  int n, x;
  cin>>n;
  int a[n];
  for(int i = 0;i<n;i++){
    cin>>a[i];
  }
  cin>>x;
  for(int i = 0;i<n;i++){
    if(a[i] == x){
      cout<<i<<"\n";
      return;
    }
  }
  cout<<"-1";
}

int main(){
  cin.tie(0); ios_base::sync_with_stdio(0);
  int t = 1;
  // cin>>t;
  while(t--) f();
  return 0;
}