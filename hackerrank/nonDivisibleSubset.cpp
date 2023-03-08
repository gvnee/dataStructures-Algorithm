#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  #ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  #endif
  int n, k;
  cin>>n>>k;
  int freq[k] = {0};
  int a;
  for(int i = 0;i<n;i++){
    cin>>a;
    freq[a%k]++;
  }
  int res = 0;
  if(freq[0]>0) res++;
  if(k%2==0 && freq[k/2]>0) res++;
  for(int i = 1;i<(k+1)/2;i++){
    res += max(freq[i], freq[k-i]);
  }
  cout<<res<<"\n";
    
  return 0;
}