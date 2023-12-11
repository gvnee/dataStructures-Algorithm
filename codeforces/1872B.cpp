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
  int d[n], s[n];
  for(int i = 0;i<n;i++){
    cin>>d[i]>>s[i];
  }
  int res = 2000;
  for(int i = 0;i<n;i++){
    int cur = s[i]/2;
    if(s[i] % 2 == 0) cur--;
    res = min(res, d[i] + cur);
  }
  cout<<res<<"\n";
}

int main(){
  cin.tie(0); ios_base::sync_with_stdio(0);
  int t = 1;
  cin>>t;
  while(t--) f();
  return 0;
}