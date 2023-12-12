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
  string s[n];
  for(int i = 0;i<n;i++){
    cin>>s[i];
  }
  string v = "vika";
  int cur = 0;
  for(int j = 0;j<m;j++){
    for(int i = 0;i<n;i++){
      if(s[i][j] == v[cur]){
        cur++;
        if(cur == 4){
          cout<<"YES\n";
          return;
        }
        break;
      }
    }
  }
  cout<<"NO\n";
}

int main(){
  cin.tie(0); ios_base::sync_with_stdio(0);
  int t = 1;
  cin>>t;
  while(t--) f();
  return 0;
}