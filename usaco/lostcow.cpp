#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define debug(x) cerr<<#x<<": "<<(x)<<"\n"

const int MOD = int(1e9) + 7;
double PI = atan(1)*4;
int temp;

void f(){
  int a, b;
  cin>>a>>b;
  if(b-a == 1){
    cout<<1<<"\n";
    return;
  }
  else if(a - b == 2){
    cout<<4<<"\n";
    return;
  }
  int res = 0;
  int dis = 1;
  bool right = false;
  int og = a;
  while(true){
    right = !right;
    for(int i = og;i<dis+og;i++){
      if(a == b){
        cout<<res<<"\n";
        return;
      }
      res++;
      if(right) a++;
      else a--;
    }
    a = og;
    res += dis;
    dis *= 2;
  }
}

int main(){
  
  ios_base::sync_with_stdio(false); cin.tie(nullptr);
  freopen("lostcow.in", "r", stdin);
  freopen("lostcow.out", "w", stdout);
  int t = 1;
  // cin>>t;
  while(t--) f();
  
  return 0;
}