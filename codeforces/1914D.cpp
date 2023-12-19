#include<bits/stdc++.h>
using namespace std;

#define all(x) x.begin(), x.end()
#define sz(x) int((x).size())
typedef pair<int,int> pi;
typedef long long ll;
#define pb push_back
#define S second
#define F first

// void f(){
//   int n; cin>>n;
//   ll a[n], b[n], c[n];
//   for(int i = 0;i<n;i++) cin>>a[i];
//   for(int i = 0;i<n;i++) cin>>b[i];
//   for(int i = 0;i<n;i++) cin>>c[i];

//   ll res = 0;
//   ll dp1 = 0, dp2 = 0, dp3 = 0;
//   for(int i = 0;i<n;i++){
//     if(i != 0) dp1 = max(dp1, a[i-1]);
//     if(i != 0) dp2 = max(dp2, b[i-1]);
//     if(i != 0) dp3 = max(dp3, c[i-1]);    

//     res = max(res, a[i] + dp2 + dp3);
//     res = max(res, b[i] + dp1 + dp3);
//     res = max(res, c[i] + dp1 + dp2);
//   }
//   cout<<res<<"\n";
// }

void f(){
  int n; cin>>n;
  vector<pi> a, b, c;
  int t;
  for(int i = 0;i<n;i++){
    cin>>t;
    a.pb({t, i});
  }
  for(int i = 0;i<n;i++){
    cin>>t;
    b.pb({t, i});
  }
  for(int i = 0;i<n;i++){
    cin>>t;
    c.pb({t, i});
  }

  sort(all(a));
  sort(all(b));
  sort(all(c));
  reverse(all(a));
  reverse(all(b));
  reverse(all(c));
  
  ll res = 0;
  for(int i = 0;i<3;i++){
    for(int j = 0;j<3;j++){
      for(int k = 0;k<3;k++){
        if(a[i].S != b[j].S && b[j].S != c[k].S && a[i].S != c[k].S){
          res = max(res, a[i].F + b[j].F + c[k].F + 0LL);
        }
      }
    }
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