#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define sz(x) int((x).size())
#define debug(x) cerr<<#x<<": "<<(x)<<"\n"
#define pb push_back

void f(){
  int n, x;
  cin>>n>>x;
  int a[n];
  vector<int> b(n);
  for(int i = 0;i<n;i++) cin>>a[i];
  for(int i = 0;i<n;i++) cin>>b[i];
  sort(a, a+n);
  sort(b.rbegin(), b.rend());
  for(int i = 0;i<n;i++){
    if(a[i] + b[i] > x){
      cout<<"No\n";
      return;
    }
  }
  cout<<"Yes\n";
}

int main(){
  ios_base::sync_with_stdio(0); cin.tie(0);
  int t = 1;
  cin>>t;
  while(t--) f();
  return 0;
}