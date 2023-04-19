/*
ID: gvne
PROG: crypt1
LANG: C++
*/
#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define sz(x) int((x).size())
#define debug(x) cerr<<#x<<": "<<(x)<<"\n"
#define pb push_back

ifstream fin ("crypt1.in");
ofstream fout ("crypt1.out");
int n;
string s;

bool present(string str){
  for(int i = 0;i<sz(str);i++){
    bool pre = false;
    for(char c:s){
      if(c == str[i]) pre = true;
    }
    if(!pre) return false;
  }
  return true;
}

bool valid(string s){
  int m1;
  m1 = stoi(s.substr(0, 3));
  string m2 = s.substr(3, 2);
  int p1 = m1 * (m2[0] - '0');
  int p2 = m1 * (m2[1] - '0');
  int mul = m1 * stoi(m2);

  string sp1 = to_string(p1), sp2 = to_string(p2), smul = to_string(mul);

  if(!present(sp1)) return false;
  if(!present(sp2)) return false;
  if(!present(smul)) return false;

  return p1<=999 && p1>=100 && p2<=999 && p2>=100 && mul<=9999 && mul>=1000;
}
int res = 0;
void rec(int depth, string prefix){
  if(depth == 5){
    if(valid(prefix)) res++;
    return;
  }
  for(int i = 0;i<n;i++){
    rec(depth+1, prefix + s[i]);
  }
}

int main(){
  fin>>n;
  int a;
  for(int i = 0;i<n;i++){
    fin>>a;
    s += to_string(a);
  }
  rec(0, "");
  fout<<res<<"\n";
  return 0;
}