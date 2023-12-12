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
  ll a[n+2];
  ll f[n+2] = {};
  bool no = false;
  for(int i = 1;i<=n;i++){
    cin>>a[i];
    if(a[i] > n) no = true;
    else{
      f[1]++;
      f[a[i]+1]--;
    }
  }
  if(no){
    cout<<"NO\n";
    return;
  }
  for(int i = 1;i<=n;i++){
    f[i] += f[i-1];
    if(a[i] != f[i]){
      cout<<"NO\n";
      return;
    }
  }
  cout<<"YES\n";
}

int main(){
  cin.tie(0); ios_base::sync_with_stdio(0);
  int t = 1;
  cin>>t;
  while(t--) f();
  return 0;
}