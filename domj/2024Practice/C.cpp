#include<bits/stdc++.h>
using namespace std;

#define all(x) x.begin(), x.end()
#define sz(x) int((x).size())
typedef pair<int,int> pi;
typedef long long ll;
#define pb push_back
#define S second
#define F first

const int M = 1000000009;

void f(){
  int n; cin>>n;

  ll a[] = {1, 1, 1};
  ll b[] = {1, 1, 1};
  for(int i = 2;i<=n;i++){
    b[0] = a[0] + a[1];
    b[1] = a[0] + a[1] + a[2];
    b[2] = a[1] + a[2];
    a[0] = b[0] % M;
    a[1] = b[1] % M;
    a[2] = b[2] % M;
  }
  cout<<(b[0] + b[1] + b[2])%M<<"\n";
}

int main(){
  cin.tie(0); ios_base::sync_with_stdio(0);
  int t = 1;
  cin>>t;
  while(t--) f();
  return 0;
}