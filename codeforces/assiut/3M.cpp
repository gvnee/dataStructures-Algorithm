#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define sz(x) int((x).size())
#define pb push_back

void f(){
  int n;
  cin>>n;
  int a[n];
  int mn = INT_MAX, mx = INT_MIN, mni = 0, mxi = 0;
  for(int i = 0;i<n;i++) cin>>a[i];
  for(int i = 0;i<n;i++){
    if(a[i] < mn){
      mn = a[i];
      mni = i;
    }
    if(a[i] > mx){
      mx = a[i];
      mxi = i;
    }
  }
  for(int i = 0;i<n;i++){
    if(i == mxi) cout<<mn<<" ";
    else if(i == mni) cout<<mx<<" ";
    else cout<<a[i]<<" ";
  }
}

int main(){
  cin.tie(0); ios_base::sync_with_stdio(0);
  int t = 1;
  // cin>>t;
  while(t--) f();
  return 0;
}