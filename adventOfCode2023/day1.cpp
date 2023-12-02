#include<bits/stdc++.h>
using namespace std;

#define all(x) x.begin(), x.end()
#define sz(x) int((x).size())
typedef pair<int,int> pi;
typedef long long ll;
#define pb push_back
#define S second
#define F first

map<string, string> digit = {{"one", "1"}, {"two", "2"}, {"three", "3"},
                             {"four", "4"}, {"five", "5"}, {"six", "6"},
                             {"seven", "7"}, {"eight", "8"}, {"nine", "9"}};

bool isDigit(char c){
  return '0' <= c && c <= '9';
}

void f(){
  string s;
  ll res = 0;
  while(cin>>s){
    string first = "", last = "";
    for(int i = 0;i<sz(s);i++){
      string tre = "", fire = "", fem = "";
      if(isDigit(s[i])){
        if(first=="") first = s[i];
        last = s[i];
      }

      if(i<=sz(s)-3) tre = s.substr(i, 3);
      if(i<=sz(s)-4) fire = s.substr(i, 4);
      if(i<=sz(s)-5) fem = s.substr(i, 5);

      if(digit.find(tre) != digit.end()){
        last = digit[tre];
        if(first == "") first = last;
      }
      if(digit.find(fire) != digit.end()){
        last = digit[fire];
        if(first == "") first = last;
      }
      if(digit.find(fem) != digit.end()){
        last = digit[fem];
        if(first == "") first = last;
      }
    }
    first += last;
    res += stoi(first);
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