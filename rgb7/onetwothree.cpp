#include<bits/stdc++.h>
using namespace std;
int main(){
  int n;
  cin>>n;
  string str;
  while(n--){
    cin>>str;
    if(str.size() == 5) cout<<3<<"\n";
    else if(str[0] == 'o' && str[1] == 'n' ||
            str[0] == 'o' && str[2] == 'e' ||
            str[1] == 'n' && str[2] == 'e'
            ) cout<<1<<"\n";
    else cout<<2<<"\n";
  }


  return 0;
}