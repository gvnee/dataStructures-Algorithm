#include<iostream>

int main(){
  int n,r=0;std::cin>>n;
  for(int i = 5;i<=n;i*=5) r+=n/i;
  std::cout<<r; 
}