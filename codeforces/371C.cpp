#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define sz(x) int((x).size())
#define pb push_back
#define F first
#define S second

pair<ll, ll> a[3];

bool notEmpty(){
  for(auto [ff, ss]:a){
    if(ff) return true;
  }
  return false;
}

void f(){
  string s;
  cin>>s;
  int need[3] = {};
  for(char c:s){
    if(c == 'B') need[0]++;
    else if(c == 'S') need[1]++;
    else need[2]++;
  }
  ll r, a, b, c, x, y, z;
  cin>>a>>b>>c>>x>>y>>z>>r;
  ll price = x * need[0] + y * need[1] + z * need[2];
  ll res = 0;
  while((a > 0 && need[0]!=0) || (b > 0 && need[1]!=0) || (c > 0 && need[2]!=0)){
    ll needa = 0;
    ll needb = 0;
    ll needc = 0;
    if(need[0] >= a){
      needa = need[0] - a;
      a = 0;
    }
    else a -= need[0];
    if(need[1] >= b){
      needb = need[1] - b;
      b = 0;
    }
    else b -= need[1];
    if(need[2] >= c){
      needc = need[2] - c;
      c = 0;
    }
    else c -= need[2];
    if(r < needa * x + needb * y + needc * z){
      cout<<res<<"\n";
      return;
    }
    res++;
    r -= needa * x + needb * y + needc * z;
  }

  ll lo = 0, up = r;
  ll mid = 0;
  while(lo<up){
    mid = lo + (up-lo + 1)/2;
    if(mid == r/price){
      break;
    }
    else if(mid < r/price){
      lo = mid;
    }
    else{
      up = mid-1;
    }
  }
  if(mid <= r/price) res += mid;
  cout<<res<<"\n";
}

// int main() {
//   string s; cin >> s;
//   ll rb = 0, rs = 0, rc = 0;
//   for (int i = 0; i < int(s.length()); i++)
//     if (s[i] == 'B') rb++;
//     else if (s[i] == 'S') rs++;
//     else rc++;
//   ll hb, hs, hc; cin >> hb >> hs >> hc;
//   ll pb, ps, pc; cin >> pb >> ps >> pc;
//   ll r; cin >> r;
//   ll lo = 0, hi = r+3*hb;
//   while (hi-lo > 1) {
//     ll mid = (lo+hi)/2, t = r;
//     if (mid*rb > hb) t -= (mid*rb-hb)*pb;
//     if (mid*rs > hs) t -= (mid*rs-hs)*ps;
//     if (mid*rc > hc) t -= (mid*rc-hc)*pc;
//     if (t >= 0) lo = mid; else hi = mid;
//   }
//   cout << lo << endl;
// }

int main(){
  cin.tie(0); ios_base::sync_with_stdio(0);
  int t = 1;
  // cin>>t;
  while(t--) f();
  return 0;
}