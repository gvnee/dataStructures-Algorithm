#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define sz(x) int((x).size())
#define pb push_back

void f(){
  int n;
  cin>>n;
  int a[n] = {};
  for(int i = 0;i<n;i++){
    cin>>a[i];
  }
  for(int i = 0;i<n;i++){
    while(a[i]){
      a[i]--;
      if(i == 0){
        cout<<"PRL";
      }
      else cout<<"PLR";
    }
    if(i != n-1) cout<<"R";
  }
}

int main(){
  cin.tie(0); ios_base::sync_with_stdio(0);
  int t = 1;
  // cin>>t;
  while(t--) f();
  return 0;
}