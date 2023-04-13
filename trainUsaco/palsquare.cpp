/*
ID: gvne
PROG: palsquare
LANG: C++
*/
#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define sz(x) int((x).size())
#define debug(x) cerr<<#x<<": "<<(x)<<"\n"
#define pb push_back

ifstream fin ("palsquare.in");
ofstream fout ("palsquare.out");

string convert(int a, int base){
  string digits = "0123456789ABCDEFGHIJ";
  string s;
  while(a>0){
    int r = a%base;
    s = digits[r] + s;
    a /= base;
  }
  return s;
}

bool isPalindrome(string s){
  for(int i = 0;i<=sz(s)/2;i++){
    if(s[i] != s[sz(s) - i - 1]) return false;
  }
  return true;
}

int main(){
 int b;
 fin>>b;
  for(int i = 1;i<=300;i++){
    string s = convert(i * i, b);
    if(isPalindrome(s)){
      fout<<convert(i, b)<<" "<<s<<"\n";
    }
  }
  
  return 0;
}