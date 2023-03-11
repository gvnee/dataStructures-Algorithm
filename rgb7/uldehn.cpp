#include<bits/stdc++.h>
using namespace std;
int main(){
  long long n;
  cin>>n;
  int arr[(n+1)/2];
  int even = 2;
    for(int i = even;i<=n;i+=2){
    arr[i] = i;
  }
  while(n>1){
    
    if(even == 2) even = 1;
    else even = 2;
    n /= 2;
  }
  cout<<arr[1]<<"\n";

  return 0;
}