#include<bits/stdc++.h>
using namespace std;
int main(){
  int n; cin>>n;

  for(int a = 3;a*a<=n*n/2;a++){
    for(int s = a-1;s>=1;s--){
      int t = a*a/s;
      if(t*s == a*a && (s+t)%2==0){
        int b = (t-s)/2, c = (t+s)/2;
        if(a<=b&&c<=n)
        cout<<a<<" "<<b<<" "<<c<<"\n";
      }
    }
  }

  return 0;
}