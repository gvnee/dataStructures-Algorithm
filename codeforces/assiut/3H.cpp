#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define sz(x) int((x).size())
#define pb push_back

vector<int> merge(vector<int> a, vector<int> b){
  vector<int> c;
  int ai = 0, bi = 0;
  while(ai<sz(a) || bi<sz(b)){
    if(ai >= sz(a)){
      c.pb(b[bi]);
      bi++;
    }
    else if(bi >= sz(b)){
      c.pb(a[ai]);
      ai++;
    }
    
    else if(a[ai] < b[bi]){
      c.pb(a[ai]);
      ai++;
    }
    else{
      c.pb(b[bi]);
      bi++;
    }
  }

  cout<<"{";
  for(int i:a) cout<<i<<" ";
  cout<<"} + {";
  for(int i:b) cout<<i<<" ";
  cout<<"} -> {";
  for(int i:c) cout<<i<<" ";
  cout<<"}\n";
  return c;
}

vector<int> mergeSort(vector<int> given){
  if(sz(given) == 1) return given;
  
  vector<int> a, b;
  
  a.assign(given.begin(), given.begin() + sz(given) / 2);
  b.assign(given.begin() + sz(given) / 2, given.end());  

  return merge(mergeSort(a) ,mergeSort(b));
}

void f(){
  int n;
  cin>>n;
  vector<int> a(n);
  for(int &i:a) cin>>i;

  vector<int> sorted = mergeSort(a);
  for(int i:sorted) cout<<i<<" ";
  cout<<"\n";
}

int main(){
  cin.tie(0); ios_base::sync_with_stdio(0);
  int t = 1;
  // cin>>t;
  while(t--) f();
  return 0;
}