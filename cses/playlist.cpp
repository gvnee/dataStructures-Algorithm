#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define sz(x) int((x).size())
#define debug(x) cerr<<#x<<": "<<(x)<<"\n"
#define pb push_back

void f(){
  int n;
  cin>>n;
  int a[n];
  for(int i = 0;i<n;i++){
    cin>>a[i];
  }
  map<int, int> m;
  int res = 0;
  for(int i = 0;i<n;i++){
    int j = i;
    while(j < n && m[a[j]] < 1){
      m[a[j]]++;
      j++;
    }
    res = max(res, j - i);
    m[a[i]]--;
  }
  cout<<res<<"\n";
}

int main(){
  ios_base::sync_with_stdio(0); cin.tie(0);
  int t = 1;
  // cin>>t;
  while(t--) f();
  return 0;
}