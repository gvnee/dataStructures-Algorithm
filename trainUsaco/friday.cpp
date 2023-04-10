/*
ID: gvne
PROG: friday
LANG: C++                 
*/
#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main(){
  ofstream fout ("friday.out");
  ifstream fin ("friday.in");
  int n;
  int week[8] = {};
  fin>>n;
  int curDay = 1;
  for(int y = 1900;y<=1900+n-1;y++){
    for(int m = 1;m<=12;m++){
      int days;
      if(m == 2){
        days = 28;
        if(y%4==0 && (y%100 != 0 || y%400 == 0)){
          days++;
        }
      }
      else if(m == 9 || m == 4 || m == 6 || m == 11){
        days = 30;
      }
      else days = 31;
      for(int day = 1;day<=days;day++){
        if(day == 13) week[curDay]++;
        curDay++;
        if(curDay>7) curDay = 1;
      }
    }
  }

  for(int i = 6;i<=7;i++){
    if(i == 6) fout<<week[i];
    else fout<<" "<<week[i];
  }
  for(int i = 1;i<=5;i++) fout<<" "<<week[i];
  fout<<"\n";

  return 0;
}