#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define sz(x) int((x).size())
#define pb push_back

void f(){
  int n;
  cin>>n;
  int a[n+2];
  ll s = 0;
  for(int i = 1;i<=n;i++){
    cin>>a[i];
    s+=a[i];
  }

  if(s % 3!=0 || n<3){
    cout<<0;
    return;
  }

  int jsum[n+2] = {};
  ll t = 0, res = 0;
  for(int i = n;i>2;i--){
    t += a[i];
    if(t == s/3) jsum[i]++;
    jsum[i] += jsum[i+1];
  }

  t = 0;
  for(int i = 1;i<n;i++){
    t += a[i];
    if(t == s/3) res+=jsum[i+2];
  }
  cout<<res<<"\n";
}

int main(){
  cin.tie(0); ios_base::sync_with_stdio(0);
  int t = 1;
  // cin>>t;
  while(t--) f();
  return 0;
}