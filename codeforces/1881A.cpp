#include<bits/stdc++.h>
using namespace std;

#define all(x) x.begin(), x.end()
#define sz(x) int((x).size())
typedef pair<int,int> pi;
typedef long long ll;
#define pb push_back
#define S second
#define F first

void f(){
  int n, m; cin>>n>>m;
  string a, b; cin>>a>>b;
  int cur = 0;
  while(cur<10){
    if(sz(a) >= sz(b)){
      for(int i = 0;i<sz(a)-sz(b)+1;i++){
        if(a.substr(i, sz(b)) == b){
          cout<<cur<<"\n";
          return;
        }
      }
    }
    cur++;
    a = a+a;
  }
  cout<<"-1"<<"\n";
}

int main(){
  cin.tie(0); ios_base::sync_with_stdio(0);
  int t = 1;
  cin>>t;
  while(t--) f();
  return 0;
}