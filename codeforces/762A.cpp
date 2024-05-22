#include<bits/stdc++.h>
using namespace std;

#define all(x) x.begin(), x.end()
#define sz(x) int((x).size())
typedef pair<int,int> pi;
typedef long long int;
#define pb push_back
#define S second
#define F first

vector<int> v;
void f(){
  int n, k;
  cin>>n>>k;

  for(int i = 1;i*i<=n;i++){
    if(n%i == 0){
      v.pb(i);
      if(i*i!=n) v.pb(n/i);
    }
  }

  if(k>sz(v)){
    cout<<"-1\n";
    return;
  }
  sort(all(v));
  cout<<v[k-1]<<"\n";
}


int main(){
  cin.tie(0); ios_base::sync_with_stdio(0);
  int t = 1;
  // cin>>t;
  while(t--) f();
  return 0;
}