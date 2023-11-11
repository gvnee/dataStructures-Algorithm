#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define sz(x) int((x).size())
#define pb push_back

void f(){
  int n;
  cin>>n;
  vector<int> a(n), b(n);
  for(int &i:a) cin>>i;
  b = a;
  reverse(b.begin(), b.end());
  for(int i = 0;i<n;i++){
    if(a[i] != b[i]){
      cout<<"NO\n";
      return;
    }
  }
  cout<<"YES\n";
}

int main(){
  cin.tie(0); ios_base::sync_with_stdio(0);
  int t = 1;
  // cin>>t;
  while(t--) f();
  return 0;
}