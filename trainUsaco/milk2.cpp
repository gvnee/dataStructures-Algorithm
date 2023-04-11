/*
ID: gvne
PROG: milk2
LANG: C++                 
*/
#include<bits/stdc++.h>
#include<fstream>
using namespace std;

typedef long long ll;
#define sz(x) int((x).size())
#define debug(x) cerr<<#x<<": "<<(x)<<"\n"
#define pb push_back

int main(){
  ifstream fin ("milk2.in");
  ofstream fout ("milk2.out");
  int n;
  fin>>n;
  int a, b;
  bool arr[1000001] = {};
  int start = INT_MAX;
  int end = 0;
  for(int i = 0;i<n;i++){
    fin>>a>>b;
    start = min(start, a);
    end = max(end, b);
    for(int j = a+1;j<=b;j++){
      arr[j] = true;
    }
  }
  int mx = 0, mn = 0;
  int curmn = 0, curmx = 0;
  for(int i = start+1;i<=end;i++){
    if(arr[i] == false){
      curmn++;
      mx = max(mx, curmx);
      curmx = 0;
    }
    else {
      curmx++;
      mn = max(mn, curmn);
      curmn = 0;
    }
  }
  mx = max(mx, curmx);
  mn = max(mn, curmn);
  fout<<mx<<" "<<mn<<"\n";
  return 0;
}