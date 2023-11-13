#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define sz(x) int((x).size())
#define pb push_back

const int N = 1000;

void f(){
  int n, k;
  cin>>n>>k;
  int a[N+2][N+2] = {};
  int x1, y1, x2, y2;
  while(n--){
    cin>>x1>>y1>>x2>>y2;
    for(int i = y1;i<y2;i++){
      a[i][x1]++;
      a[i][x2]--;
    }
  }
  ll res = 0;
  for(int i = 0;i<=N+1;i++){
    ll sum = 0;
    for(int j = 0;j<=N+1;j++){
      sum += a[i][j];
      if(sum == k) res++;
    }
  }
  cout<<res<<"\n";
}

int main(){
  cin.tie(0); ios_base::sync_with_stdio(0);
  freopen("paintbarn.in", "r", stdin);
  freopen("paintbarn.out", "w", stdout);
  int t = 1;
  // cin>>t;
  while(t--) f();
  return 0;
}