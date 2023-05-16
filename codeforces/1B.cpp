#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define sz(x) int((x).size())
#define debug(x) cerr<<#x<<": "<<(x)<<"\n"
#define pb push_back

bool isNum(char c){
  return c >= '0' && c<='9';
}

string rcToExcel(string s){
  string res = "";
  int c = 0;
  for(int i = 0;i<sz(s);i++){
    if(s[i] == 'C'){
      c = i;
      break;
    }
  }
  string row = s.substr(1, c-1);
  int col = stoi( s.substr(c+1, sz(s)) );

  string digits = "";
  for(char c = 'A';c<='Z';c++) digits += c;
  string scol = "";
  while(col > 0){
    int index = col%26-1;
    if(index < 0) index = 25;
    scol += digits[index];
    if(col % 26 == 0) col /= 26, col--;
    else col /= 26;
  }
  reverse(scol.begin(), scol.end());
  res = scol + row;
  return res;
}

string excelToRc(string s){
  string res = "R";
  int num = 0;
  for(int i = 0;i<sz(s);i++){
    if(isNum(s[i])){
      num = i;
      break;
    }
  }
  string row = s.substr(num, sz(s));
  int cur = 1;
  int col = 0;
  for(int i = num-1;i>=0;i--){
    col += (s[i]-'A'+1) * cur;
    cur *= 26;
  }
  res += row + 'C' + to_string(col);
  return res;
}

void f(){
  string s;
  cin>>s;
  int chars = 0;
  for(char c:s) if(!isNum(c)) chars++;
  bool rc = (s[0] == 'R' && isNum(s[1]) && chars == 2);

  if(rc){
    cout<<rcToExcel(s)<<"\n";
  }
  else cout<<excelToRc(s)<<"\n";
}

int main(){
  ios_base::sync_with_stdio(0); cin.tie(0);
  int t = 1;
  cin>>t;
  while(t--) f();
  return 0;
}