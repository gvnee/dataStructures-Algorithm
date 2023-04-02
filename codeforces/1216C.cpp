#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define sz(x) int((x).size())
#define debug(x) cerr<<#x<<": "<<(x)<<"\n"

const int MOD = int(1e9) + 7;
double PI = atan(1)*4;
int temp;

struct Rect{
  ll x1, x2, y1, y2;
};

ll area(Rect a){
  return (a.x2 - a.x1) * (a.y2 - a.y1);
}

ll intersect(Rect a, Rect b){
  ll x = max(0LL, min(a.x2, b.x2) - max(a.x1, b.x1));
  ll y = max(0LL, min(a.y2, b.y2) - max(a.y1, b.y1));
  return x*y;
}

Rect createRect(Rect a, Rect b){
  Rect c;
  c.x1 = max(a.x1, b.x1);
  c.y1 = max(a.y1, b.y1);
  c.x2 = min(a.x2, b.x2);
  c.y2 = min(a.y2, b.y2);
  return c;
}


void f(){
  Rect a, b, c;
  cin>>a.x1>>a.y1>>a.x2>>a.y2;
  cin>>b.x1>>b.y1>>b.x2>>b.y2;
  cin>>c.x1>>c.y1>>c.x2>>c.y2;

  Rect in1 = createRect(a, b);
  Rect in2 = createRect(a, c);
  ll f = intersect(in1, in2);

  if(area(a) - intersect(a, b) - intersect(a, c) + f > 0){
    cout<<"YES\n";
  }
  else cout<<"NO\n";

}

int main(){
  
  ios_base::sync_with_stdio(false); cin.tie(nullptr);

  int t = 1;
  // cin>>t;
  while(t--) f();
  
  return 0;
}