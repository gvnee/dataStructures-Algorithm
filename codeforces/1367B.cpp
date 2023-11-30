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
  int n; cin>>n;
  int o = 0, e = 0;
  for(int i = 0;i<n;i++){
    int a; cin>>a;
    if(i%2 != a%2){
      if(a%2) o++;
      else e++;
    }
  }
  if(e != o) cout<<"-1\n";
  else cout<<e<<"\n";
}

int main(){
  cin.tie(0); ios_base::sync_with_stdio(0);
  int t = 1;
  cin>>t;
  while(t--) f();
  return 0;
}