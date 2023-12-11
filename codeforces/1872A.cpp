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
  float a, b, c;
  cin>>a>>b>>c;
  int res = 0;
  while(a != b){
    res++;
    if(a < b){
      swap(a, b);
    }
    if((a-b)/2 >= c){
      a -= c;
      b += c;
    }
    else{
      break;
    }
  }
  cout<<res<<"\n";
}

int main(){
  cin.tie(0); ios_base::sync_with_stdio(0);
  int t = 1;
  cin>>t;
  while(t--) f();
  return 0;
}