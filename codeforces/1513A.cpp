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
  int n, k;
  cin>>n>>k;

  if(n <= 2 && k > 0){
    cout<<"-1\n";
    return;
  }
  
  int cur = 3;
  int c = 1, i = 2;
  vector<int> r = {1};
  for(i = 2;i<=n;i+=2){
    if(c <= k){
      r.pb(cur);
      r.pb(cur-1);
    }
    else break;
    cur += 2;
    c++;
  }
  for(i = i;i<=n;i++){
    r.pb(i);
  }

  int o = 0;
  for(int i = 1;i<n-1;i++){
    if(r[i] > r[i-1] && r[i] > r[i+1]) o++;
  }
  
  if(sz(r) > n || o > k){
    cout<<"-1\n";
    return;
  }
  
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