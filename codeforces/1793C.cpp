#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define sz(x) int((x).size())
#define pb push_back

void f(){
  int n; cin>>n;
  int a[n];
  for(int i = 0;i<n;i++){
    cin>>a[i];
  }
  int l = 0, r = n-1;
  int mx = n, mn = 1;
  while(l<r){

    if(a[l] != mx && a[r] != mx && a[l] != mn && a[r] != mn){
      cout<<l+1<<" "<<r+1<<"\n";
      return;
    }
    
    if(a[l] == mx){
      l++;
      mx--;
    }
    else if(a[l] == mn){
      l++;
      mn++;
    }
    if(a[r] == mx){
      r--;
      mx--;
    }
    else if(a[r] == mn){
      r--;
      mn++;
    }
  }
  cout<<"-1\n";
}

int main(){
  cin.tie(0); ios_base::sync_with_stdio(0);
  int t = 1;
  cin>>t;
  while(t--) f();
  return 0;
}