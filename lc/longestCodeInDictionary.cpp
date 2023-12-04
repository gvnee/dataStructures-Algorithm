#include<bits/stdc++.h>
using namespace std;

#define all(x) x.begin(), x.end()
#define sz(x) int((x).size())
typedef pair<int,int> pi;
typedef long long ll;
#define pb push_back
#define S second
#define F first

const int MXN = 100000;

int trie[MXN][26];

void f(){
  string str;
  vector<string> s;
  while(cin>>str){
    s.pb(str);
  }
  sort(all(s));
  
  for(auto word : s){
    int level = 0;
    for(char c : word){
      if(trie[level][c-'a'] == 0){
        trie[level][c-'a'];
      }
      else{
        
      }
      level++;
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