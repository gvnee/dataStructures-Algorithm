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
  int n; cin>>n;
  int a[n];
  ll res = 0;
  for(int i = 0;i<n;i++){
    cin>>a[i];
    if(a[i] > 0) res += a[i];
  }

  if(n == 1){
    cout<<max(0, a[0])<<"\n";
    return;
  }
  
  if(a[0] < 0){
    if(a[1] < 0){
      cout<<res<<"\n";
      return;
    }
    res = max({res + a[0],res - a[1]});
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