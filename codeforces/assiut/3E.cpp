#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define sz(x) int((x).size())
#define pb push_back

void f(){
  int n;
  cin>>n;
  int mn = INT_MAX, a, mi = 0;
  for(int i = 0;i<n;i++){
    cin>>a;
    if(a < mn){
      mn = a;
      mi = i+1;
    }
  }
  cout<<mn<<" "<<mi;
}

int main(){
  cin.tie(0); ios_base::sync_with_stdio(0);
  int t = 1;
  // cin>>t;
  while(t--) f();
  return 0;
}