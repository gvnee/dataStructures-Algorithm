#include<bits/stdc++.h>
using namespace std;

#define all(x) x.begin(), x.end()
#define sz(x) int((x).size())
typedef pair<int,int> pi;
typedef long long ll;
#define pb push_back
#define S second
#define F first

void f(){
  int n, k; cin>>n>>k;
  int a[n];
  for(int i = 0;i<n;i++) cin>>a[i];
  bool s = 1;
  for(int i = 1;i<n;i++){
    if(a[i] < a[i-1]){
      s = false;
      break;
    }
  }
  if(s) cout<<"YES\n";
  else if(k == 1) cout<<"NO\n";
  else cout<<"YES\n";
}

int main(){
  cin.tie(0); ios_base::sync_with_stdio(0);
  int t = 1;
  cin>>t;
  while(t--) f();
  return 0;
}