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
  int s[32] = {};
  while(n--){
    int op, v;
    cin>>op>>v;
    if(op == 1){
      s[v]++;
    }
    else{
      if(v == 0){
        cout<<"YES\n";
      }
      else{
        for(int i = 31;i>=0;i--){
          int l = -1, r = s[i];
          while(l < r){
            int mid = l + (r-l+1)/2;
            if(mid * (1<<i) <= v){
              l = mid;
            } else {
              r = mid - 1;
            }
          }
          v -= l * (1<<i);
        }

        if(v){
          cout<<"NO\n";
        }
        else cout<<"YES\n";
      }
    }
  }
}

int main(){
  cin.tie(0); ios_base::sync_with_stdio(0);
  int t = 1;
  // cin>>t;
  while(t--) f();
  return 0;
}