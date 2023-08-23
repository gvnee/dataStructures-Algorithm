#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define sz(x) int((x).size())
#define debug(x) cerr<<#x<<": "<<(x)<<"\n"
#define pb push_back

void f(){
  int n;
  cin>>n;
  int a[100000] = {};
  int res = 0;
  vector<int> last(8, -1);
  for(int i = 1;i<=n;i++){
    cin>>a[i];
    a[i] += a[i-1];
    a[i] %= 7;
    if(last[a[i]] == -1){
      last[a[i]] = i;
    }
    else res = max(res, i - last[a[i]]);
  }
  cout<<res<<"\n";
}

int main(){
  ios_base::sync_with_stdio(0); cin.tie(0);
  int t = 1;
  // cin>>t;
  freopen("div7.in", "r", stdin);
  freopen("div7.out", "w", stdout);
  while(t--) f();
  return 0;
}