#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define sz(x) int((x).size())
#define debug(x) cerr<<#x<<": "<<(x)<<"\n"
#define pb push_back
void f(){
  int n, t;
  cin>>n>>t;
  int s[n], e[n];
  for(int i = 0;i<n;i++){
    cin>>s[i];
    s[i] += i;
    // cout<<s[i]<<" ";
  }
  for(int i = 0;i<n;i++) cin>>e[i];
  int res = -1, index = -1;
  for(int i = 0;i<n;i++){
    if(s[i] <= t){
      if(res < e[i]){
        res = e[i];
        index = i+1;
      }
    }
  }
  cout<<index<<"\n";
}

int main(){
  ios_base::sync_with_stdio(0); cin.tie(0);
  int t = 1;
  cin>>t;
  while(t--) f();
  return 0;
}