#include<bits/stdc++.h>
using namespace std;

#define all(x) x.begin(), x.end()
#define sz(x) int((x).size())
typedef pair<int,int> pi;
typedef long long ll;
#define pb push_back
#define S second
#define F first

vector<string> s;
int length = 0;

bool isDigit(char c){
  return '0'<=c && c<='9';
}

bool isNumber(string check){
  if(check == "") return false;
  for(char c:check) if('0' > c || c > '9') return false;
  return true;
}

bool isSymbol(char c){
  return !isDigit(c) && c != '.';
}

bool vindex(int i, int j){
  return i>=0 && i<sz(s) &&j>=0 &&j<length;
}

bool valid(int y, int l, int r){
  bool valid = false;

  if(vindex(y-1, r+1)) if(isSymbol(s[y-1][r+1])) valid = true;
  if(vindex(y,   r+1)) if(isSymbol(s[y][r+1]))   valid = true;
  if(vindex(y+1, r+1)) if(isSymbol(s[y+1][r+1])) valid = true;
  if(vindex(y+1, l-1)) if(isSymbol(s[y+1][l-1])) valid = true;
  if(vindex(y,   l-1)) if(isSymbol(s[y][l-1]))   valid = true;
  if(vindex(y-1, l-1)) if(isSymbol(s[y-1][l-1])) valid = true;

  for(int j = l;j<=r;j++){
    if(vindex(y-1, j)) if(isSymbol(s[y-1][j])) valid = true;
    if(vindex(y+1, j)) if(isSymbol(s[y+1][j])) valid = true;
  }
  return valid;
}

void f(){
  string x;
  while(cin>>x) s.pb(x);
  length = sz(x);
  ll res = 0;
  for(int i = 0;i<sz(s);i++){
    string cur = "";
    int leftBound = 0;
    for(int j = 0;j<length;j++){
      if(isDigit(s[i][j])){
        if(cur == "") leftBound = j;
        cur += s[i][j];
      }
      else{
        if(isNumber(cur)) 
          if(valid(i, leftBound, j-1))
            res += stoi(cur);
        cur = "";
      }
    }
    if(isNumber(cur)) 
      if(valid(i, leftBound, length-1))
        res += stoi(cur);
  }
  cout<<res<<"\n";
}

int main(){
  cin.tie(0); ios_base::sync_with_stdio(0);
  int t = 1;
  // cin>>t;
  while(t--) f();
  return 0;
}