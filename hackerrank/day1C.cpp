#include <bits/stdc++.h>
using namespace std;

using ll = long long;

#define debug(x) cerr<<#x<<": "<<(x)<<"\n"

const int MOD = int(1e9) + 7;
double PI = atan(1)*4;
int temp;

int wait[10000000] = {};
unordered_map<int, pair<int, int> > m;

void addTime(int start, int duration){

  for(int i = start;i<=start+duration;i++){
    wait[i] += duration;
    duration--;
  }
}

void removeTime(int index){
  int start = m[index].first;
  int duration = m[index].second;
  for(int i = start;i<=start+duration;i++){
    wait[i] -= duration;
    duration--;
  }
}

void f(){
  int q;
  cin>>q;
  char c;
  int start, duration, index, at;
  for(int i = 1;i<=q;i++){
    cin>>c;
    if(c == '+'){
      cin>>start>>duration;
      addTime(start, duration);
      m[i] = {start, duration};
    }
    else if(c == '?'){
      cin>>at;
      cout<<wait[at]<<"\n";
    }
    else{
      cin>>index;
      removeTime(index);
    }
  }
}

int main(){
  
  ios_base::sync_with_stdio(false); cin.tie(nullptr);
  #ifndef ONLINE_JUDGE
    freopen("input.in", "r", stdin);
  #endif

  int t = 1;
  // cin>>t;
  while(t--) f();
  
  return 0;
}