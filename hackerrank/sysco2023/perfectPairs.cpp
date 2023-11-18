#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define sz(x) int((x).size())
#define pb push_back

// void f(){
//   int n;
//   cin>>n;
//   vector<int> a;
//   int t;
//   for(int i = 0;i<n*2;i++){
//     cin>>t;
//     a.pb(t);
//   }
//   sort(a.begin(), a.end());
//   ll res = 0;
//   do{
//     int x = 1;
//     ll cur = 0;
//     for(int i = 0;i<n*2;i+=2){
//       cur += x * __gcd(a[i], a[i+1]);
//       x++;
//     }
//     res = max(cur, res);
//   }
//   while(next_permutation(a.begin(), a.end()));
//   cout<<res<<"\n";
// }

void f(){
  int n;
  cin>>n;
  vector<int> a;
  int t;
  for(int i = 0;i<n*2;i++){
    cin>>t;
    a.pb(t);
  }
  int point = n;
  bool used[n*2+1] = {};
  ll res = 0;
  while(point != 0){
    ll mx = 0;
    int x = 0, y = 0;
    for(int i = 0;i<sz(a);i++){
      if(used[i]) continue;
      for(int j = i+1;j<sz(a);j++){
        if(used[j]) continue;
        ll cur = __gcd(a[i], a[j]);
        if(cur >= mx){
          x = i;
          y = j;
          mx = cur;
        }
      }
    }
    used[x] = true;
    used[y] = true;
    res += point * mx;
    point--;
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