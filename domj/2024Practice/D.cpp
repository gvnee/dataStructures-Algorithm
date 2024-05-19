//eepy_eepy_kittyyy_

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
  int m, n; cin>>m>>n;
  bool a[n] = {};
  for(int i = 0;i<m;i++){
    for(int j = 0;j<n;j++){
      int t;
      cin>>t;
      if(t) a[j] = true;
    }
  }
  int res = 0;
  for(int i = 0;i<n;i++) if(a[i]) res++;
  cout<<res<<"\n";
}

int main(){
  cin.tie(0); ios_base::sync_with_stdio(0);
  int t = 1;
  // cin>>t;
  while(t--) f();
  return 0;
}