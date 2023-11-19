#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define sz(x) int((x).size())
#define pb push_back

void f(){
  int n;
  cin>>n;
  int a[n];
  a[0] = INT_MIN;
  for(int i = 1;i<=n;i++){
    cin>>a[i];
  }
  ll res = n;
  for(int i = 1;i<=n;i++){
    for(int j = i+1;j<=n;j++){
      if(a[j] < a[j-1]) break;
      res++;
    }
  }
  cout<<res<<"\n";
}

int main(){
  cin.tie(0); ios_base::sync_with_stdio(0);
  int t = 1;
  cin>>t;
  while(t--) f();
  return 0;
}