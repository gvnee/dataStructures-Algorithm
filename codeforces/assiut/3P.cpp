#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define sz(x) int((x).size())
#define pb push_back

void f(){
  int n;
  cin>>n;
  int a;
  int mn = INT_MAX;
  for(int i = 0;i<n;i++){
    cin>>a;
    int cur = 0;
    while(a % 2 == 0){
      cur++;
      a/=2;
    }
    mn = min(mn, cur);
  }
  cout<<mn<<"\n";
}

int main(){
  cin.tie(0); ios_base::sync_with_stdio(0);
  int t = 1;
  // cin>>t;
  while(t--) f();
  return 0;
}