#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define sz(x) int((x).size())
#define pb push_back

void f(){
  string a, b;
  cin>>a>>b;
  int freq[26] = {};

  for(char c:a){
    freq[c-'a']++;
  }

  for(char c:b) freq[c-'a']--;

  for(int i = 0;i<26;i++){
    if(freq[i] != 0){
      cout<<"NO\n";
      return;
    }
  }
  cout<<"YES\n";
}

int main(){
  cin.tie(0); ios_base::sync_with_stdio(0);
  int t = 1;
  cin>>t;
  while(t--) f();
  return 0;
}