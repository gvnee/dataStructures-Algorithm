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
  int n = 8;
  string s[n];
  string r = "RRRRRRRR", b = "BBBBBBBB";
  for(int i = 0;i<n;i++){
    cin>>s[i];
  }

  for(int i = 0;i<n;i++){
    if(s[i] == r){
      cout<<"R\n";
      return;
    }
  }
  
  for(int i = 0;i<n;i++){
    string cur = "";
    for(int j = 0;j<n;j++){
      cur += s[j][i];
    }
    if(cur == b){
      cout<<"B\n";
      return;
    }
  }
}

int main(){
  cin.tie(0); ios_base::sync_with_stdio(0);
  int t = 1;
  cin>>t;
  while(t--) f();
  return 0;
}