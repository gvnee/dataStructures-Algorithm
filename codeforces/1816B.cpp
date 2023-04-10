#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define sz(x) int((x).size())
#define debug(x) cerr<<#x<<": "<<(x)<<"\n"

void f(){
  int n;
  cin>>n;
  deque<int> even, odd;
  for(int i = 1;i<=2*n;i++){
    if(i%2==0) even.push_back(i);
    else odd.push_back(i);
  }
  for(int i = n-1;i>=0;i--){
    if(i%2!=0){
      cout<<even.back()<<" ";
      even.pop_back();
    }
    else{
      cout<<even.front()<<" ";
      even.pop_front();
    }
  }
  cout<<"\n";
  for(int i = 0;i<n;i++){
    if(i%2!=0){
      cout<<odd.back()<<" ";
      odd.pop_back();
    }
    else{
      cout<<odd.front()<<" ";
      odd.pop_front();
    }
  }
  cout<<"\n";
}

int main(){
  ios_base::sync_with_stdio(0); cin.tie(0);
  int t = 1;
  cin>>t;
  while(t--) f();
  return 0;
}