#include<bits/stdc++.h>
using namespace std;

#define ll long long

const int mxn = 10000;
ll tree[mxn+1];
int n;

ll sum(int i){
  ll s = 0;
  while(i>0){
    s += tree[i];
    i &= ~(i&-i);
    // i -= i&-i;
  }
  return s;
}

void add(int i, int v){
  while(i<=n){
    tree[i] += v;
    i += i&-i;
  }
}

int main(){
  int q;
  cin>>n>>q;
  int arr[n+1];
  for(int i = 1;i<=n;i++){
    cin>>arr[i];
    tree[i] = arr[i];
  }
  for(int i = 1;i<=n;i++){
    int parent = i+(i&-i);
    if(parent<=n) tree[parent] += tree[i];
  }
  int v, i, l, r;
  while(q--){
    int op; cin>>op;
    if(op == 1){
      cin>>i>>v;
      add(i, v - arr[i]);
      arr[i] = v;
    }
    else{
      cin>>l>>r;
      cout<<sum(r) - sum(l-1)<<"\n";
    }
  }

  return 0;
}