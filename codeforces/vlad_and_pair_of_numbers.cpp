#include<bits/stdc++.h>
using namespace std;

int toBinary(int x){
  int binary = 0b0;
  string str;
  while(x>0){
    if(x%2 == 0) str += '0';
    else str+='1';
    x /= 2;
  }
  for(int i = str.size()-1;i>=0;i--) cout<<str[i];
  cout<<"\n";
  return binary;
}

int main(){
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  freopen("input.txt", "r", stdin);
  int t;
  cin>>t;
  while(t--){
    int x;
    cin>>x;
    // toBinary(x);
    bitset<10> bin(x);
    cout<<bin<<"\n";
  }
}