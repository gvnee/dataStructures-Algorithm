#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define debug(x) cerr<<#x<<": "<<(x)<<"\n"

const int MOD = int(1e9) + 7;
double PI = atan(1)*4;
int temp;

void f(){
  int n;
  cin>>n;
  string a[n];
  int b[n];
  int c[n];
  int onA, onB;
  int offA, offB;
  int qa = 0, qb = INT_MAX;
  int ea = 0, eb = INT_MAX;
  for(int i = 0;i<n;i++){
    cin>>a[i]>>b[i]>>c[i];
    if(a[i] == "on"){
      onA = b[i];
      onB = c[i];
    }
    else if(a[i] == "off"){
      offA = b[i];
      offB = c[i];
    }
  }
  for(int i = 0;i<n;i++){
    if(a[i] == "none"){
      qa = max(qa, b[i] - offB);
      qb = min(qb, c[i] - offA);

      ea = max(ea, b[i] - onB);
      eb = min(eb, c[i] - onA);
    }
  }

  cout<<ea<<' '<<eb<<"\n";
  cout<<qa<<' '<<qb<<"\n";
}

int main(){
  
  ios_base::sync_with_stdio(false); cin.tie(nullptr);
  freopen("traffic.in", "r", stdin);
  freopen("traffic.out", "w", stdout);
  int t = 1;
  // cin>>t;
  while(t--) f();
  
  return 0;
}