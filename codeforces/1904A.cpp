#include<bits/stdc++.h>
using namespace std;

#define all(x) x.begin(), x.end()
#define sz(x) int((x).size())
typedef pair<int,int> pi;
typedef long long ll;
#define pb push_back
#define S second
#define F first

vector<pi> rrr;

bool valid(pi a){
  for(auto x:rrr) if(x.F == a.F && x.S == a.S) return false;
  return true;
}

void f(){

  rrr.clear();
  
  int a, b; cin>>a>>b;
  int x1, x2, y1, y2;
  pi k, q;
  cin>>x1>>y1>>x2>>y2;
  k = {x1, y1};
  q = {x2, y2};

  vector<pi> knight = {{x1+a, y1 + b}, {x1+b, y1 + a},
                       {x1+a, y1 - b}, {x1+b, y1 - a},
                       {x1-a, y1 + b}, {x1-b, y1 + a},
                       {x1-a, y1 - b}, {x1-b, y1 - a}};
  ll res = 0;

  for(auto o:knight){

    vector<pi> cur = {{o.F+a, o.S + b}, {o.F+b, o.S + a},
                      {o.F+a, o.S - b}, {o.F+b, o.S - a},
                      {o.F-a, o.S + b}, {o.F-b, o.S + a},
                      {o.F-a, o.S - b}, {o.F-b, o.S - a}};
    
    for(auto i:cur){
      if(o == i || i == k) continue;
      if(valid(i) && i == q){
        res++;
        rrr.pb(q);
      }
    }
  }

  cout<<res<<"\n";
}

int main(){
  cin.tie(0); ios_base::sync_with_stdio(0);
  int t = 1;
  cin>>t;
  while(t--) f();
  return 0;
}