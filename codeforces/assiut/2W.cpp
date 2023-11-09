#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define sz(x) int((x).size())
#define pb push_back

void f(){
  int n;
  cin>>n;
  int cur = 1;
  for(int i = 1;i<=n;i++){
    for(int j = 1;j<=n-i;j++){
      cout<<" ";
    }
    for(int j = 1;j<=cur;j++){
      cout<<"*";
    }
    cout<<"\n";
    cur+=2;
  }
  for(int i = n;i>=1;i--){
    cur-=2;
    for(int j = 1;j<=n-i;j++){
      cout<<" ";
    }
    for(int j = 1;j<=cur;j++){
      cout<<"*";
    }
    cout<<"\n";
  }
}

int main(){
  cin.tie(0); ios_base::sync_with_stdio(0);
  int t = 1;
  // cin>>t;
  while(t--) f();
  return 0;
}