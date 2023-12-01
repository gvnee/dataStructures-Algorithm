#include<bits/stdc++.h>
using namespace std;

#define all(x) x.begin(), x.end()
#define sz(x) int((x).size())
typedef pair<int,int> pi;
typedef long long ll;
#define pb push_back
#define S second
#define F first

map<string, int> digit = {{"one", 1},
                          {"two", 2},
                          {"three", 3},
                          {"four", 4},
                          {"five", 5},
                          {"six", 6},
                          {"seven", 7},
                          {"eight", 8},
                          {"nine", 9}};

bool isDigit(char c){
  return '0' <= c && c <= '9';
}

void f(){
  string s;
  ll res = 0;
  while(cin>>s){
    string a = "";
    for(int i = 0;i<sz(s);i++){
      string three = "", four = "", five = "";
      if(isDigit(s[i])){
        a += s[i];
        break;
      }

      if(i<=sz(s)-3) three = s.substr(i, 3);
      if(i<=sz(s)-4) four = s.substr(i, 4);
      if(i<=sz(s)-5) five = s.substr(i, 5);
      if(digit.find(three) != digit.end()){
        a += to_string(digit[three]);
        break;
      }
      if(digit.find(four) != digit.end()){
        a += to_string(digit[four]);
        break;
      }
      if(digit.find(five) != digit.end()){
        a += to_string(digit[five]);
        break;
      }
    }
    for(int i = sz(s)-1;i>=0;i--){
      string three = "", four = "", five = "";
      if(isDigit(s[i])){
        a += s[i];
        break;
      }
      if(i<=sz(s)-3) three = s.substr(i, 3);
      if(i<=sz(s)-4) four = s.substr(i, 4);
      if(i<=sz(s)-5) five = s.substr(i, 5);
      if(digit.find(three) != digit.end()){
        a += to_string(digit[three]);
        break;
      }
      if(digit.find(four) != digit.end()){
        a += to_string(digit[four]);
        break;
      }
      if(digit.find(five) != digit.end()){
        a += to_string(digit[five]);
        break;
      }

    }
    res += stoi(a);
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