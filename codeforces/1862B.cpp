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
  int b[n];
  for(int i = 0;i<n;i++){
    cin>>b[i];
  }
  vector<int> r;
  for(int i = 0;i<n;i++){
    r.pb(b[i]);
    if(i!=0 && b[i] < b[i-1]) r.pb(b[i]);
  }
  cout<<sz(r)<<"\n";
  for(int x:r) cout<<x<<" ";
  cout<<"\n";
}

int main(){
  cin.tie(0); ios_base::sync_with_stdio(0);
  int t = 1;
  cin>>t;
  while(t--) f();
  return 0;
}