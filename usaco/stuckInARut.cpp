#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define sz(x) int((x).size())
#define debug(x) cerr<<#x<<": "<<(x)<<"\n"

const int MOD = int(1e9) + 7;
const int INF = INT_MAX;
double PI = atan(1)*4;
int temp;

struct st{
  char c;
  int x;
  int y;
};

void f(){
  int n;
  cin>>n;
  vector< pair<int, int> > N;
  vector< pair<int, int> > E;
  vector<st> arr;
  char c;
  int x;
  int y;
  for(int i = 0;i<n;i++){
    cin>>c>>x>>y;
    st a;
    a.c = c;
    a.x = x;
    a.y = y;
    arr.push_back(a);
    if(c == 'N') N.push_back({x, y});
    else E.push_back({x, y});
  }
  for(st a:arr){
    int res = INF;
    bool gotCut = false;
    if(a.c == 'N'){
      for(auto e:E){
        if(a.x >= e.first && a.y <= e.second){
          if(e.second - a.y > a.x - e.first){
            res = min(res, e.second - a.y);
            gotCut = true;
          }

        }
      }
    }
    else{
      for(auto n:N){
        if(a.x <= n.first && a.y >= n.second){
          if(n.first - a.x > a.y - n.second){ 
            res = min(res, n.first - a.x);
            gotCut = true;
          }
        }
      }
    }


    
    if(res == INF) cout<<"Infinity\n";
    else cout<<res<<"\n";
  }
}

int main(){
  
  ios_base::sync_with_stdio(false); cin.tie(nullptr);

  int t = 1;
  // cin>>t;
  while(t--) f();
  
  return 0;
}