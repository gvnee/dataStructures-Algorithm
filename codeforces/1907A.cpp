#include<bits/stdc++.h>
using namespace std;

#define all(x) x.begin(), x.end()
#define sz(x) int((x).size())
typedef pair<int,int> pi;
typedef long long ll;
#define pb push_back
#define S second
#define F first

void f(){
  string str;
  cin>>str;

  for(int i = 'a';i<='h';i++){
    if(i == str[0]) continue;
    cout<<char(i)<<str[1]<<"\n";
  }
  for(int i = '1';i<='8';i++){
    if(i == str[1]) continue;
    cout<<str[0]<<char(i)<<"\n";
  }

}

int main(){
  cin.tie(0); ios_base::sync_with_stdio(0);
  int t = 1;
  cin>>t;
  while(t--) f();
  return 0;
}