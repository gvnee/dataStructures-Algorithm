/*
ID: gvne
PROG: barn1
LANG: C++
*/
#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define pb push_back

ifstream fin ("barn1.in");
ofstream fout ("barn1.out");

int main(){
  int m, s, c;
  fin>>m>>s>>c;
  if(m>c) m = c;
  int arr[c];

  for(int i = 0;i<c;i++)
    fin>>arr[i];

  sort(arr, arr+c);

  vector<int> gap;
  for(int i = 1;i<c;i++)
    gap.pb(arr[i] - arr[i-1]);

  sort(gap.begin(), gap.end());
  ll res = 0;
  for(int i = 0;i<=c-1-m;i++)
    res+=gap[i];

  fout<<res + m<<"\n";
  return 0;
}