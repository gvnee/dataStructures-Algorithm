#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define sz(x) int((x).size())
#define debug(x) cerr<<#x<<": "<<(x)<<"\n"

void f(){
  int n, m;
  cin>>n>>m;
  int a1, a2;
  cout<<"? 1 1"<<endl;
  cout.flush();
  cin>>a1;
  cout<<"? 1 "<<m<<endl;
  cout.flush();
  cin>>a2;
  int x = (a1+a2-m+3)/2;
  int y = a1-(a1+a2-m+3)/2 + 2;
  cout<<"! "<<y<<' '<<x<<endl;
  cout.flush();
}

int main(){
  int t = 1;
  cin>>t;
  while(t--) f();
  return 0;
}