#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define sz(x) int((x).size())
#define pb push_back

void f(){
  int n, k;
  cin>>n>>k;
  int cur = 1, a;
  int mn = INT_MAX;
  for(int i = 1;i<=n;i++){
    cin>>a;
    mn = min(mn, a);
    if(cur == k || i == n){
      cout<<mn<<" \n"[i==n];
      cur = 0;
      mn = INT_MAX;
    }
    cur++;
  }
}

int main(){
  cin.tie(0); ios_base::sync_with_stdio(0);
  int t = 1;
  // cin>>t;
  while(t--) f();
  return 0;
}