#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define sz(x) int((x).size())
#define pb push_back

void f(){
  int n;
  cin>>n;
  int a[n];
  for(int i = 0;i<n;i++){
    cin>>a[i];
  }
  sort(a, a+n);
  ll res = 0;
  for(int i = 0;i<n-2;i++){
    for(int j = i+1;j<n-1;j++){
      res += __gcd(a[i], a[j]) * (n-j-1);
      cout<<i+1<<" "<<j+1<<" "<<__gcd(a[i], a[j]) * (n-j-1)<<"\n";
    }
  }
  cout<<res<<"\n\n";
}

int main(){
  cin.tie(0); ios_base::sync_with_stdio(0);
  int t = 1;
  cin>>t;
  while(t--) f();
  return 0;
}