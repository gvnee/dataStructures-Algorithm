#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define debug(x) cerr<<#x<<": "<<(x)<<"\n"

const int MOD = int(1e9) + 7;
double PI = atan(1)*4;
int temp;

int mxn = 100000;

void f(){
  int n;
  cin>>n;
  int a[mxn];
  char b[mxn];
  queue<int> U;
  queue<int> L;
  queue<int> D;
  queue<int> R;
  for(int i = 0;i<n;i++){
    cin>>a[i]>>b[i];
    if(b[i] == 'U') U.push(a[i]);
    else if(b[i] == 'R') R.push(a[i]);
    else if(b[i] == 'D') D.push(a[i]); 
    else L.push(a[i]);
  }

  int u = -1, l = -1, d = -1, r = -1;
  bool stuck = false;
  for(int i = 0;i<n;i++){
    int cur;
    string dep = "0000";

    if(stuck){
      cout<<-1<<"\n";
      continue;
    }

    if(l != -1 && L.front() <= l){
      int &a = L.front();
      a = l+1;
    }
    if(u != -1 && U.front() <= u){
      int &b = U.front();
      b = u+1;
    }
    if(d != -1 && D.front() <= d){
      int &c = D.front();
      c = d+1;
    }
    if(r != -1 && R.front() <= r){
      int &d = R.front();
      d = r+1;
    }

    if(b[i] == 'L') cur = L.front();
    if(b[i] == 'D') cur = D.front();
    if(b[i] == 'U') cur = U.front();
    if(b[i] == 'R') cur = R.front();
    
    if(U.front() == cur)
      if((!U.empty() && !L.empty()) && U.front() >= L.front()) dep[0] = '1';
      else dep[0] = '0';

    if(L.front() == cur)
      if((!L.empty() && !D.empty()) && L.front() >= D.front()) dep[1] = '1';
      else dep[1] = '0';

    if(D.front() == cur)
      if((!D.empty() && !R.empty()) && D.front() >= R.front()) dep[2] = '1';
      else dep[2] = '0';

    if(R.front() == cur)
      if((!R.empty() && !U.empty()) && R.front() >= U.front()) dep[3] = '1';
      else dep[3] = '0';

    if(dep == "1111"){
      cout<<"-1\n";
      stuck = true;
      continue;
    }

    int start = 0;
    for(int j = 0;j<4;j++){
      if(dep[j] == '0'){
        start = j;
        break;
      }
    }

    for(int j = start;j>=0;j--){
      if(j == 0 && dep[0] == '1'){
        int &a = U.front();
        a = L.front() + 1;
      }
      else if(j == 1 && dep[1] == '1'){
        int &b = L.front();
        b = D.front() + 1;
      }
      else if(j == 2 && dep[2] == '1'){
        int &c = D.front();
        c = R.front() + 1;
      }
      else if(j == 3 && dep[3] == '1'){
        int &d = R.front();
        d = U.front() + 1;
      }
    }

    for(int j = 3;j>start;j--){
      if(j == 0 && dep[0] == '1'){
        int &a = U.front();
        a = L.front() + 1;
      }
      else if(j == 1 && dep[1] == '1'){
        int &b = L.front();
        b = D.front() + 1;
      }
      else if(j == 2 && dep[2] == '1'){
        int &c = D.front();
        c = R.front() + 1;
      }
      else if(j == 3 && dep[3] == '1'){
        int &d = R.front();
        d = U.front() + 1;
      }
    }
    // cout<<b[i]<<" ";
    if(b[i] == 'U'){
      cout<<U.front()<<"\n";
      u = U.front();
      U.pop();
    }
    else if(b[i] == 'L'){
      cout<<L.front()<<"\n";
      l = L.front();
      L.pop();
    }
    else if(b[i] == 'D'){
      cout<<D.front()<<"\n";
      d = D.front();
      D.pop();
    }
    else{
      cout<<R.front()<<"\n";
      r = R.front();
      R.pop();
    }
  }

}

int main(){
  ios_base::sync_with_stdio(false); cin.tie(nullptr);
  // freopen("input.in", "r", stdin);
  int t = 1;
  // cin>>t;
  while(t--) f();
  
  return 0;
}