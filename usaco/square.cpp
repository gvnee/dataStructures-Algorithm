#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define sz(x) int((x).size())
#define debug(x) cerr<<#x<<": "<<(x)<<"\n"

const int MOD = int(1e9) + 7;
double PI = atan(1)*4;
int temp;

struct Rect{
  int x1, x2, y1, y2;
};

void f(){
  Rect a, b;
  cin>>a.x1>>a.y1>>a.x2>>a.y2;
  cin>>b.x1>>b.y1>>b.x2>>b.y2;

  int height = max(a.y2, b.y2) - min(a.y1, b.y1);
  int width = max(a.x2, b.x2) - min(a.x1, b.x1);
  int res = max(height, width);
  cout<<res*res<<"\n";
}

int main(){
  
  ios_base::sync_with_stdio(false); cin.tie(nullptr);
  freopen("square.in", "r", stdin);
  freopen("square.out", "w", stdout);
  int t = 1;
  // cin>>t;
  while(t--) f();
  
  return 0;
}