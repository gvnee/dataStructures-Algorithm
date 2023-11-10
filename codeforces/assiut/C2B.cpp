#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define sz(x) int((x).size())
#define pb push_back

void f(){
  int n;
  cin>>n;
  for(int i = 0;i<n;i++){
    for(int j = 0;j<n;j++){
      if(n%2 && i == n/2 && j == i) cout<<'X';
      else if(i == j) cout<<'\\';
      else if(i+j == n-1) cout<<'/';
      else cout<<'*';
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