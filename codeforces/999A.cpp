#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define sz(x) int((x).size())
#define pb push_back

void f(){
  int n, k;
  cin>>n>>k;
  int a[n];
  for(int i = 0;i<n;i++){
    cin>>a[i];
  }

  int l = 0, r = n-1;
  int res = 0;
  while(l <= r){
    if(a[l] <= k){
      res++;
      l++;
    }
    else if(a[r] <=k){
      res++;
      r--;
    }
    else break;
  }
  cout<<res<<"\n";
  
}

int main(){
  cin.tie(0); ios_base::sync_with_stdio(0);
  int t = 1;
  // cin>>t;
  while(t--) f();
  return 0;
}