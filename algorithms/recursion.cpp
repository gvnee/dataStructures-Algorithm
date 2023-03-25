#include<bits/stdc++.h>
using namespace std;
#define int long long
//0 1 1 2 3 5 8 13 21
int memo[10000] = {};
bool visited[10000] = {};
int bruh(int a){
  if(a == 0) return 0;
  if(a == 1) return 1;
  if(visited[a]) return memo[a];
  visited[a] = true;
  memo[a] = bruh(a-1) + bruh(a-2);
  return bruh(a-1) + bruh(a-2);
}

int main(){
  int n;
  cin>>n;
  cout<<bruh(n);
  return 0;
}