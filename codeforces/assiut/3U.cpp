#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define sz(x) int((x).size())
#define pb push_back

void f(){
  int n, m;
  cin>>n>>m;
  int a[n], b[m];
  for(int i = 0;i<n;i++){
    cin>>a[i];
  }
  for(int i = 0;i<m;i++){
    cin>>b[i];
  }
  int c = 0;
  for(int i = 0;i<m;i++){    
    while(c < n){
      if(a[c] == b[i]){
        c++;
        if(i == m-1){
          cout<<"YES\n";
          return;
        }
        break;
      }
      c++;
    }
  }
  cout<<"NO\n";
}

int main(){
  cin.tie(0); ios_base::sync_with_stdio(0);
  int t = 1;
  // cin>>t;
  while(t--) f();
  return 0;
}