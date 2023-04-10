/*
ID: gvne
PROG: beads
LANG: C++                 
*/
#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main(){
  ofstream fout ("beads.out");
  ifstream fin ("beads.in");
  int n;
  fin>>n;
  string s;
  fin>>s;
  int res = 0;
  for(int i = 0;i<n;i++){
    char cur = 'w';
    bool switched = false;
    int score = 0;
    for(int j = 0;j<n;j++){
      char curc = s[(i+j)%n];
      if(curc != 'w'){
        if(cur == 'w'){
          cur = curc;
        }
        else if(cur != curc){
          if(switched){
            break;
          }
          else{
            cur = curc;
            switched = true;
          }
        }
      }
      score++;
    }
    res = max(res, score);
  }
  fout<<res<<"\n";
  return 0;
}