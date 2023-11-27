#include<bits/stdc++.h>
using namespace std;

#define all(x) (x.begin(), x.end())
#define sz(x) int((x).size())
#define pii pair<int, int>
typedef long long ll;
#define pb push_back
#define S second
#define F first

void f(){
  int n; cin>>n;
  double a;
  double s = 0;
  for(int i = 0;i<n;i++){
    cin>>a;
    s += a;
  }
  printf("%.2f\n", s/n);
}

int main(){
  cin.tie(0); ios_base::sync_with_stdio(0);
  int t = 1;
  // cin>>t;
  while(t--) f();
  return 0;
}