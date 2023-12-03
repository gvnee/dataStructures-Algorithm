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

bool isNumber(string check){
  if(check == "") return false;
  for(char c:check) if('0' > c || c > '9') return false;
  return true;
}

bool isSymbol(char c){
  return !isdigit(c) && c != '.';
}

bool vindex(int i, int j){
  return i>=0 && i<sz(s) &&j>=0 &&j<length;
}

int getNumber(int i, int j){
  string number = "";
  while(isdigit(s[i][j])){
    j--;
    if(j < 0) break;
  }
  j++;
  while(j<length && isdigit(s[i][j])){
    number += s[i][j];
    j++;
  }
  // cout<<number<<"\n";
  return stoi(number);
}

int calc(int i, int j){
  ll r = 1, adj = 0;
  if(vindex(i, j-1)) if(isdigit(s[i][j-1])) adj++, r *= getNumber(i, j-1);
  if(vindex(i, j+1)) if(isdigit(s[i][j+1])) adj++, r *= getNumber(i, j+1);

  if(vindex(i-1, j)) if(isdigit(s[i-1][j])) adj++, r *= getNumber(i-1,j);
  else{
    if(vindex(i-1, j-1)) if(isdigit(s[i-1][j-1])) adj++, r *= getNumber(i-1,j-1);
    if(vindex(i-1, j+1)) if(isdigit(s[i-1][j+1])) adj++, r *= getNumber(i-1,j+1);
  }


  if(vindex(i+1, j)) if(isdigit(s[i+1][j])) adj++, r *= getNumber(i+1,j);
  else{
    if(vindex(i+1, j-1)) if(isdigit(s[i+1][j-1])) adj++, r *= getNumber(i+1,j-1);
    if(vindex(i+1, j+1)) if(isdigit(s[i+1][j+1])) adj++, r *= getNumber(i+1,j+1);
  }

  if(adj == 2) return r;
  else return 0;
}

void f(){
  string x;
  while(cin>>x) s.pb(x);
  length = sz(x);
  ll res = 0;
  for(int i = 0;i<sz(s);i++)
    for(int j = 0;j<length;j++)
      if(s[i][j] == '*') res += calc(i, j);

  cout<<res<<"\n";
}

int main(){
  cin.tie(0); ios_base::sync_with_stdio(0);
  int t = 1;
  // cin>>t;
  while(t--) f();
  return 0;
}