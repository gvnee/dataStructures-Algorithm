#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define sz(x) int((x).size())
#define pb push_back

bool vowel(char c){
  string vowels = "aeiou";
  for(char x:vowels) if(x == c) return true;
  return false;
}

int beautifulSubstrings(string s, int k){
  ll res = 0;
  for(int i = 0;i<sz(s);i++){
    int v = 0, c = 0;
    for(int j = i;j<sz(s);j++){
      if(vowel(s[j])) v++;
      else c++;
      if(v == c && (v*c)%k==0) res++;
    }
  }
  return res;
}

int main(){
  cin.tie(0); ios_base::sync_with_stdio(0);

  string s; cin>>s;
  int k; cin>>k;
  
  beautifulSubstrings(string s, int k);
  return 0;
}