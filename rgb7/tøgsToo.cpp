#include<bits/stdc++.h>
using namespace std;

#define all(x) x.begin(), x.end()
#define sz(x) int((x).size())
#define pi pair<int, int>
typedef long long ll;
#define pb push_back
#define S second
#define F first

void f(){
  int n;
  cin>>n;
  int s = 0;
  for(int i = 1;i<=n/2;i++){
    if(n%i==0){
      s += i;
    }
  }
  if(s==n) cout<<"YES";
  else cout<<"NO";
}

int main(){
  cin.tie(0); ios_base::sync_with_stdio(0);
  int t = 1;
  // cin>>t;
  while(t--) f();
  return 0;
}