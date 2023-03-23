#include <bits/stdc++.h>
using namespace std;

int main(){
  string str;
  cin>>str;
  stack<int> s;
  int res = 0;
  for(char c:str){
    if(s.empty() && (c == '}' || c == ')' || c == ']' || c == '>')){
      res+=2;
    }
    else if(c == '{' || c == '(' || c == '[' || c == '<'){
      s.push(c);
    }
    else if(s.top() == '{' && c == '}' ||
            s.top() == '[' && c == ']' ||
            s.top() == '(' && c == ')' ||
            s.top() == '<' && c == '>'){
      s.pop();
    }
    else{
      res+=2;
    }
  }
  cout<<res<<"\n";
  return 0;
}