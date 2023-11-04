#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define sz(x) int((x).size())
#define debug(x) cerr<<#x<<": "<<(x)<<"\n"
#define pb push_back

void f(){
  float x;
  cin>>x;
  if(x<0 || x>100){
    cout<<"Out of Intervals\n";
    return;
  }
  cout<<"Interval ";
  if(x<=25) cout<<"[0,25]";
  else if(x<=50) cout<<"(25,50]";
  else if(x<=75) cout<<"(50,75]";
  else cout<<"(75,100]";
  cout<<"\n";
}

int main(){
  cin.tie(0); ios_base::sync_with_stdio(0);
  int t = 1;
  // cin>>t;
  while(t--) f();
  return 0;
}