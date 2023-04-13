/*
ID: gvne
PROG: transform
LANG: C++
*/
#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define sz(x) int((x).size())
#define debug(x) cerr<<#x<<": "<<(x)<<"\n"
#define pb push_back

vector<string> turn90(vector<string> v){
  int n = sz(v);
  vector<string> turned = v;
  for(int i = 0;i<n;i++){
    for(int j = 0;j<n;j++){
      turned[i][j] = v[n-j-1][i];
    }
  }
  return turned;
}

vector<string> mirror(vector<string> v){
  int n = sz(v);
  vector<string> mirrored = v;
  for(int i = 0;i<n;i++){
    for(int j = 0;j<n;j++){
      mirrored[i][j] = v[i][n-j-1];
    }
  }
  return mirrored;
}

int main(){
  ifstream fin ("transform.in");
  ofstream fout ("transform.out");
  int n;
  fin>>n;
  vector<string> arr(n);
  for(int i = 0;i<n;i++){
    fin>>arr[i];
  }
  vector<string> a(n);
  for(int i = 0;i<n;i++){
    fin>>a[i];
  }
  vector<string> deg90 = turn90(arr);
  vector<string> deg180 = turn90(deg90);
  vector<string> deg270 = turn90(deg180);
  vector<string> mirrored = mirror(arr);

  if(a == deg90) fout<<1<<"\n";
  else if(a == deg180) fout<<2<<"\n";
  else if(a == deg270) fout<<3<<"\n";
  else if(a == mirrored) fout<<4<<"\n";
  else if(a == mirror(deg90) || a == mirror(deg180) || a == mirror(deg270)){
    fout<<5<<"\n";
  }
  else if(a == arr) fout<<6<<"\n";
  else fout<<7<<"\n";
  return 0;
}