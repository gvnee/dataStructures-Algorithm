#include <bits/stdc++.h>
using namespace std;
int main(){
  int n;
  cin>>n;
  int t[] = {60, 20, 10, 5, 1};
  stack<int> sta;
  for(int i = 0;i<sizeof(t)/4;i++){
    if(n/t[i] > 0){
      sta.push(n/t[i]);
      n -= n/t[i] * t[i];
    } else {
      sta.push(0);
    }
  }
  while(!sta.empty()){
    cout<<sta.top()<<" ";
    sta.pop();
  }
  cout<<"\n";
  return 0;
}