#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define debug(x) cerr<<#x<<": "<<(x)<<"\n"

const int MOD = int(1e9) + 7;
double PI = atan(1)*4;
int temp;

int freq[26]= {};
vector<int> getFreq(string s){
  vector<int> a(26);
  for(auto c:s){
    a[c - 'a']++;
  }
  return a;
}

void f(){
  int n;
  cin>>n;
  string a;
  string b;
  for(int i = 0;i<n;i++){
    cin>>a>>b;
    vector<int> x = getFreq(a);
    vector<int> y = getFreq(b);
    for(int i = 0;i<26;i++){
      freq[i] += max(x[i], y[i]);
    }
  }
  for(int i = 0;i<26;i++) cout<<freq[i]<<"\n";
}

int main(){
  
  ios_base::sync_with_stdio(false); cin.tie(nullptr);
  freopen("blocks.in", "r", stdin);
  freopen("blocks.out", "w", stdout);
  int t = 1;
  // cin>>t;
  while(t--) f();
  
  return 0;
}