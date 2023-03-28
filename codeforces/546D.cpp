#include<bits/stdc++.h>
using namespace std;

const int MxN = 5e6;

vector<int> largestFactor(MxN+1, 0);
vector<int> factorsCount(MxN+1, 0);
vector<int> prefixSum(MxN+1, 0);


void preprocess(){
  for(int i = 2;i<=MxN;i++){
    if(largestFactor[i] == 0)
      for(int j = i;j<=MxN;j+=i){
        largestFactor[j] = i;
      }
    factorsCount[i] = factorsCount[i/largestFactor[i]] + 1;
    prefixSum[i] = prefixSum[i-1] + factorsCount[i];
  }
}

void f(){
  int a, b;
  cin>>a>>b;
  cout<<prefixSum[a] - prefixSum[b]<<"\n";
}

int main(){
  ios_base::sync_with_stdio(0); cin.tie(0);

  preprocess();
  
  int t = 1;
  cin>>t;
  while(t--) f();

  return 0;
}