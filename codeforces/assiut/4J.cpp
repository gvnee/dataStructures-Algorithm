#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define sz(x) int((x).size())
#define pb push_back

void f(){
  int a[26] = {};
  string s; cin>>s;
  for(char c:s) a[c-'a']++;
  for(int i = 0;i<26;i++){
    if(a[i]){
      cout<<char(i + 'a')<<" : "<<a[i]<<"\n";
    }
  }
}

int main(){
  cin.tie(0); ios_base::sync_with_stdio(0);
  int t = 1;
  // cin>>t;
  while(t--) f();
  return 0;
}