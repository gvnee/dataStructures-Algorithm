// 00011001100110011001100110011000

#include<bits/stdc++.h>
using namespace std;

uint rev(uint a){
  uint b = 0;
  for(uint bit = 0;bit<31;bit++){
    uint mask = 1 << bit;
    if(a & mask) b |= 1;
    b = b << 1;
  }
  return b;
}

void isPalindrome(int a){
  int r = rev(a);
  if(a == r){
    // cout<<a<<" "binary(a)<<"\n";
  }
}

void printBinary(int a){
  for(int bit = 31;bit>=0;bit--){
    uint mask = 1 << bit;
    if(a&mask) cout<<1;
    else cout<<0;
  }
  cout<<"\n";
}

int main(){
  // for(int i = start; i<=end;i++){
  //   isPalindrome(arr[i]);
  // }
  uint r = rev(123456);
  bitset<32> a(123456);
  bitset<32> b(r);
  cout<<"\n"<<a<<"\n"<<b<<"\n\n";
  bitset<32> c(123);
  printBinary(123);
  cout<<c<<"\n";
  
}