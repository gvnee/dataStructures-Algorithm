#include<bits/stdc++.h>
using namespace std;

int main(){

  ios_base::sync_with_stdio(0);
  cin.tie(0);
  
  long long t;
  cin>>t;
  int a, b;
  while(t--){
    cin>>a>>b;
    if(a>b) cout<<">\n";
    else if(a==b) cout<<"=\n";
    else cout<<"<\n";
  }
  
  return 0;
}