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
  string s; cin>>s;
  int z = 0;
  for(int i = 0;i<sz(s);i++){
    if(s[i] == '0') z++;
  }
  if(z == 0) cout<<"NO\n";
  else cout<<"YES\n";
}


int main(){
  cin.tie(0); ios_base::sync_with_stdio(0);
  int t = 1;
  cin>>t;
  while(t--) f();
  return 0;
}