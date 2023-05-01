#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define sz(x) int((x).size())
#define debug(x) cerr<<#x<<": "<<(x)<<"\n"
#define pb push_back

void f(){
  int n;
  cin>>n;
  deque<int> a(n);
  deque<int> sorted;
  for(int i = 0;i<n;i++) cin>>a[i];

  for(int i = n-2;i>=0;i--){
    if(i == n-1){
      sorted.push_front(a[i]);
      a.pop_back();
    }
    else if(a[i] <= a[i+1]){
      sorted.push_front(a[i]);
      a.pop_back();
    }
    else break;
  }

  int res = 0;
  while(!a.empty()){
    res++;
    int cur = a.front();
    auto it = upper_bound(sorted.begin(), sorted.end(), cur);
    sorted.insert(it, cur);
    a.pop_front();
  }
  cout<<res<<"\n";
}

int main(){
  ios_base::sync_with_stdio(0); cin.tie(0);

  freopen("sleepy.in", "r", stdin);
  freopen("sleepy.out", "w", stdout);
  
  int t = 1;
  // cin>>t;
  while(t--) f();
  return 0;
}