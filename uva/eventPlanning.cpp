#include <bits/stdc++.h>
using namespace std;

using ll = long long;

#define debug(x) cerr<<#x<<": "<<(x)<<"\n"

const int MOD = int(1e9) + 7;
double PI = atan(1)*4;
int temp;

int main(){
  
  ios_base::sync_with_stdio(false); cin.tie(nullptr);
  #ifndef ONLINE_JUDGE
    freopen("input.in", "r", stdin);
  #endif

  int t = 1;
  cin>>t;
  int n, b, h, w;
  while(scanf("%d%d%d%d", &n, &b, &h, &w) != EOF){
    int price;
    int beds;
    int res = INT_MAX;
    for(int i = 0;i<h;i++){
      cin>>price;
      for(int j = 0;j<w;j++){
        cin>>beds;
        if(beds>=n && price*n<b){
          res = min(res, price*n);
        }
      }
    }
    if(res != INT_MAX) cout<<res<<"\n";
    else cout<<"stay home!\n";
  }
  
  return 0;
}