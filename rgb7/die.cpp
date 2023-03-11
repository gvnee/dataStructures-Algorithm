#include<bits/stdc++.h>
using namespace std;
int main(){
  int a, b;
  int aWin = 0, bWin = 0, tie = 0;
  int aDis;
  int bDis;
  cin>>a>>b;
  for(int i = 1;i<=6;i++){
    aDis = abs(a-i);
    bDis = abs(b-i);
    if(aDis < bDis) aWin++;
    else if(aDis > bDis) bWin++;
    else tie++;
  }
  cout<<aWin<<" "<<tie<<" "<<bWin<<"\n";
  return 0;
}