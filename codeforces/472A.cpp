#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define sz(x) int((x).size())
#define debug(x) cerr<<#x<<": "<<(x)<<"\n"
#define pb push_back

void f(){
  int n;
  cin>>n;
  for(int i = 4;i<n;i++){
    int comp = 0;
    for(int j = 2;j<=sqrt(i);j++){
      if(i % j == 0){
        comp++;
        break;
      }
    }
    for(int j = 2;j<=sqrt(n - i);j++){
      if((n - i) % j == 0){
        comp++;
        break;
      }
    }
    if(comp == 2){
      cout<<i<<" "<<n-i<<"\n";
      return;
    }
  }
}

int main(){
  cin.tie(0); ios_base::sync_with_stdio(0);
  int t = 1;
  // cin>>t;
  while(t--) f();
  return 0;
}