#include<bits/stdc++.h>
using namespace std;

int main(){

  ios_base::sync_with_stdio(0);
  cin.tie(0);
  freopen("input.in", "r", stdin);
  
  string str;
  bool left = true;
  while(getline(cin, str)){
    for(int i = 0;i<str.size();i++){
      if(str[i] == '"'){
        if(left){
          left = !left;
          cout<<"``";
        }
        else{
          left = !left;
          cout<<"''";
        }
      }
      else cout<<str[i];
    }
    cout<<"\n";
  }
  
  return 0;
}