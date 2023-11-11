#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define sz(x) int((x).size())
#define pb push_back

// int binarySearch(int l, vector<int> a){
//   int x = a[l-1];
//   int r = sz(a);
//   while(l<r){
//     int mid = l + (r-l)/2;
//     if(a[mid] + x > 0)
//       r = mid;
//     else l = mid+1;
//   }
//   return l;
// }

void f(){
  int n;
  cin>>n;
  vector<int> a(n), b(n), d(n);
  for(int &i:a) cin>>i;
  for(int &i:b) cin>>i;
  for(int i = 0;i<n;i++){
    d[i] = a[i] - b[i];
  }
  sort(d.begin(), d.end());
  ll r = 0;
  for(int i = 0;i<n;i++){
    if(d[i] > 0){
      r += n-i-1;
      continue;
    }
    int cur = lower_bound(d.begin()+i+1, d.end(), -d[i] + 1) - d.begin();
    r += n - cur;
  }
  cout<<r<<"\n";
}

int main(){
  cin.tie(0); ios_base::sync_with_stdio(0);
  int t = 1;
  // cin>>t;
  while(t--) f();
  return 0;
}