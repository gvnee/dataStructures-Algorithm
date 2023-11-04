#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define sz(x) int((x).size())
#define debug(x) cerr<<#x<<": "<<(x)<<"\n"
#define pb push_back

void f(){
  float x, y;
  cin>>x>>y;
  if(x == 0 && y == 0) cout<<"Origem\n";
  else if(x == 0) cout<<"Eixo Y\n";
  else if(y == 0) cout<<"Eixo X\n";
  else if(x>0 && y>0) cout<<"Q1\n";
  else if(x<0 && y>0) cout<<"Q2\n";
  else if(x<0 && y<0) cout<<"Q3\n";
  else cout<<"Q4\n";
}

int main(){
  cin.tie(0); ios_base::sync_with_stdio(0);
  int t = 1;
  // cin>>t;
  while(t--) f();
  return 0;
}