#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define sz(x) int((x).size())
#define pb push_back

void f(){
  int n;
  cin>>n;
  int a[n];
  ll mn = LLONG_MAX;
  int mni = 0;
  for(int i = 0;i<n;i++){
    cin>>a[i];
    if(a[i] < mn){
      mn = a[i];
      mni = i;
    }
  }
  bool sorted = true;
  for(int i = 1;i<n;i++){
    if(a[i] < a[i-1]){
      sorted = false;
    }
  }
  if(sorted){
    cout<<0<<"\n";
    return;
  }
  for(int i = mni+1;i<n;i++){
    if(a[i]<a[i-1]){
      cout<<"-1\n";
      return;
    }
  }

  cout<<mni<<"\n";
}

int main(){
  cin.tie(0); ios_base::sync_with_stdio(0);
  int t = 1;
  cin>>t;
  while(t--) f();
  return 0;
}