/*
ID: gvne
PROG: dualpal
LANG: C++
*/
#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define sz(x) int((x).size())
#define debug(x) cerr<<#x<<": "<<(x)<<"\n"
#define pb push_back

ifstream fin ("dualpal.in");
ofstream fout ("dualpal.out");

bool isPalindrome(string s){
  for(int i = 0;i<=sz(s);i++){
    if(s[i] != s[sz(s) - i - 1]) return false;
  }
  return true;
}

string convert(int a, int b){
  string s;
  while(a>0){
    int r = a%b;
    s = to_string(r) + s;
    a /= b;
  }
  return s;
}

int main(){
  int n, s;
  fin>>n>>s;
  int cur = s+1;
  while(n>0){
    int res = 0;
    for(int i = 2;i<=10;i++){
      if(isPalindrome(convert(cur, i))) res++;
      if(res >= 2) break;
    }
    if(res>=2){
      n--;
      fout<<cur<<"\n";
    }
    cur++;
  }
  return 0;
}