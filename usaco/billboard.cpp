#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define sz(x) int((x).size())
#define debug(x) cerr<<#x<<": "<<(x)<<"\n"

const int MOD = int(1e9) + 7;
double PI = atan(1)*4;
int temp;

struct Rect{
  int x1, y1, x2, y2;
};

int area(Rect r){
  return (r.x2-r.x1) * (r.y2 - r.y1);
}

int intersect(Rect a, Rect b){
  int x = max(0, min(a.x2, b.x2) - max(a.x1, b.x1));
  int y = max(0, min(a.y2, b.y2) - max(a.y1, b.y1));
  return x*y;
}

void f(){
  Rect a, b, t;
  cin>>a.x1>>a.y1>>a.x2>>a.y2;
  cin>>b.x1>>b.y1>>b.x2>>b.y2;
  cin>>t.x1>>t.y1>>t.x2>>t.y2;

  int res = 0;
  res += area(a) - intersect(a, t);
  res += area(b) - intersect(b, t);

  cout<<res<<"\n";
}

int main(){
  
  ios_base::sync_with_stdio(false); cin.tie(nullptr);
  freopen("billboard.in", "r", stdin);
  freopen("billboard.out", "w", stdout);
  int t = 1;
  // cin>>t;
  while(t--) f();
  
  return 0;
}