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
  string s; cin>>s;
  ll res = 1;
  for(char c:s){
    int a = c-'0';
    int cur = 0;
    for(int i = 0;i<=a;i++){
      for(int j = 0;j<=a;j++){
        if(a-i-j >= 0) cur++;
      }
    }
    res *= cur;
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