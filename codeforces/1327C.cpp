#include<bits/stdc++.h>
using namespace std;

#define all(x) x.begin(), x.end()
#define sz(x) int((x).size())
typedef pair<int, int> pi;
typedef long long ll;
#define pb push_back
#define S second
#define F first

void f(){
  int n, m, k;
  cin>>n>>m>>k;
  int a, b;
  while(k--) cin>>a>>b;
  cout<<(n-1) + (m-1) + n*m - 1<<"\n";
  for(int i = 0;i<n-1;i++){
    cout<<"U";
  }
  for(int i = 1;i<m;i++){
    cout<<"L";
  }
  for(int i = 0;i<n;i++){
    for(int j = 1;j<m;j++){
      if(i%2==0) cout<<"R";
      else cout<<"L";
    }
    if(i != n-1){
      cout<<"D";
    }
  }
}

int main(){
  cin.tie(0); ios_base::sync_with_stdio(0);
  int t = 1;
  // cin>>t;
  while(t--) f();
  return 0;
}