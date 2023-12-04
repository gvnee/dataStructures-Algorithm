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
  ll n, p, lesson, task; cin>>n>>p>>lesson>>task;
  ll tasks = n/7;
  if(n%7) tasks++;
  ll l = 0, r = n, mid = 0;
  while(l<r){
    mid = l + (r-l)/2;
    if(p <= mid*lesson + min(mid * 2, tasks) * task){
      r = mid;
    }
    else{
      l = mid+1;
    }
  }
  cout<<n-l<<"\n";
}

// void f(){
//   ll n, p, lesson, task; cin>>n>>p>>lesson>>task;
//   ll tasks = n / 7;
//   if(n&7 == 0) tasks++;
//   for(int i = n;i>=1;i-=7){
    
//   }

// }

int main(){
  cin.tie(0); ios_base::sync_with_stdio(0);
  int t = 1;
  cin>>t;
  while(t--) f();
  return 0;
}