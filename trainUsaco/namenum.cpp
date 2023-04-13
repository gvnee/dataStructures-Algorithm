/*
ID: gvne
PROG: namenum
LANG: C++
*/
#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define sz(x) int((x).size())
#define debug(x) cerr<<#x<<": "<<(x)<<"\n"
#define pb push_back

ifstream fin ("namenum.in");
ofstream fout ("namenum.out");

map<int, vector<char>> l;
string s;
int n;
set<string> valid;

bool found = false;

void rec(int depth, string prefix){
  if(depth == n){
    if(valid.count(prefix) >= 1){
      fout<<prefix<<"\n";
      found = true;
    }
    return;
  }
  for(int i = 0;i<3;i++){
    int a = (char) s[depth];
    a -= '0';
    rec(depth+1, prefix + char(l[a][i]));
  }
}

int main(){
  ifstream file("dict.txt");
  string line;
  while(getline(file, line)){
    valid.insert(line);
  }
  fin>>s;
  n = sz(s);

  char cur = 'A';
  for(int i = 2; i <= 9; i++){
    for(int j = 0;j<3;j++){
      l[i].push_back(cur);
      cur++;
      if(cur == 'Q' || cur == 'Z') cur++;
    }
  }

  rec(0, "");
  if(!found){
    fout<<"NONE\n";
  }

  // for(auto it:l){
  //   cout<<it.first<<" ";
  //   for(char c:it.second){
  //     cout<<c<<" ";
  //   }
  //   cout<<"\n";
  // }

  return 0;
}