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
  int n, k;
  cin>>n>>k;
  int curn = 1;
  int curp = curn + 2;
  for(int i = 1;i<=n;i++){
    if(i%2 == 0 && k > 0){
      cout<<curp<<" ";
      curp += 2;
      k--;
    }
    else{
      cout<<curn<<" ";
      if(k > 0) curn += 2;
      else curn++;
    }
  }
  cout<<"\n";
}

int main(){
  cin.tie(0); ios_base::sync_with_stdio(0);
  int t = 1;
  cin>>t;
  while(t--) f();
  return 0;
}