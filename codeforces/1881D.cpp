#include<bits/stdc++.h>
using namespace std;

#define all(x) x.begin(), x.end()
#define sz(x) int((x).size())
typedef pair<int,int> pi;
typedef long long ll;
#define pb push_back
#define S second
#define F first

const int MXN = 1e6;

void f(){
  int n; cin>>n;
  int a[n];
  for(int i = 0;i<n;i++) cin>>a[i];
  unordered_map<int, int> mp;
  for(int i = 0;i<n;i++){
    for(int k = 2;k*k<=a[i];k++){
      while(a[i]%k==0){
        a[i] /= k;
        mp[k]++;
      }
    }
    if(a[i] > 1) mp[a[i]]++;
  }

  for(auto [_, c]:mp){
    if(c%n){
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