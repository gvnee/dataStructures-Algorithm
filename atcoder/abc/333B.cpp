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
  string a, b; cin>>a>>b;
  sort(all(a));
  sort(all(b));
  vector<int> f = {a[1] - a[0], 5 - (a[1] - a[0])};
  vector<int> s = {b[1] - b[0], 5 - (b[1] - b[0])};

  for(int x:f){
    for(int y:s){
      if(x == y){
        cout<<"Yes\n";
        return;
      }
    }
  }
  cout<<"No\n";
}

int main(){
  cin.tie(0); ios_base::sync_with_stdio(0);
  int t = 1;
  // cin>>t;
  while(t--) f();
  return 0;
}