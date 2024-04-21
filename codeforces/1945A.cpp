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
  int in, ex, un;
  cin>>in>>ex>>un;
  ll res = in;
  res += ex / 3;
  ex %= 3;
  if(ex == 0){
    res += un/3;
    if(un%3 != 0) res++;
  }
  else if(ex == 1){
    if(un < 2){
      cout<<"-1\n";
      return;
    }
    res++;
    un-=2;
    res += un/3;
    if(un%3 != 0) res++;
  }
  else if(ex == 2){
    if(un < 1){
      cout<<"-1\n";
      return;
    }
    res++;
    un--;
    res += un/3;
    if(un%3 != 0) res++;
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