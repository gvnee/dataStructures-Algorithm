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
  int res = 0;
  int l = 0, r = 0;
  for(int i = 0;i<n;i++){
    if(s[i] == 'B'){
      l = i;
      break;
    }
  }
  for(int i = n-1;i>=0;i--){
    if(s[i] == 'B'){
      r = i;
      break;
    }
  }
  cout<<r-l+1<<"\n";
}

int main(){
  cin.tie(0); ios_base::sync_with_stdio(0);
  int t = 1;
  cin>>t;
  while(t--) f();
  return 0;
}