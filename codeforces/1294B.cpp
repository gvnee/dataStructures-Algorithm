#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define sz(x) int((x).size())
#define pb push_back

const int mxn = 1000;

void f(){
  int n;
  cin>>n;
  priority_queue<int> a[mxn+1];
  int x, y;
  for(int i = 0;i<n;i++){
      cin>>x>>y;
      a[x].push(-y);
  }
  x = 0;
  y = 0;
  vector<char> res;
  for(int i = 0;i<=mxn;i++){
    if(a[i].empty()) continue;
    while(x<i){
      x++;
      res.pb('R');
    }
    while(!a[i].empty()){
      int cur = -(a[i].top());
      if(cur < y){
        cout<<"NO\n";
        return;
      }
      while(y < cur){
        y++;
        res.pb('U');
      }
      a[i].pop();
    }
  }
  cout<<"YES\n";
  for(char c:res) cout<<c;
  cout<<"\n";
}

int main(){
  cin.tie(0); ios_base::sync_with_stdio(0);
  int t = 1;
  cin>>t;
  while(t--) f();
  return 0;
}