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
  int n, k; cin>>n>>k;
  int p = 0;
  if(n % 2 == 0) p = n/2-1;
  else p = n/2;
  if(k>p){
    cout<<"-1\n";
    return;
  }
  int a[n];
  for(int i = 0;i<n;i++) a[i] = i+1;
  int cur = 0;
  for(int i = 1;i<n;i+=2){
    if(cur == k) break;
    swap(a[i], a[i+1]);
    cur++;
  }
  for(int i = 0;i<n;i++) cout<<a[i]<<" ";
  cout<<"\n";
}

int main(){
  cin.tie(0); ios_base::sync_with_stdio(0);
  int t = 1;
  cin>>t;
  while(t--) f();
  return 0;
}