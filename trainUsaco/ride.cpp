/*
ID: gvne
PROG: ride
LANG: C++                 
*/
#include<bits/stdc++.h>
#include<fstream>

using namespace std;

int main() {
    ofstream fout ("ride.out");
    ifstream fin ("ride.in");
    string a, b;
    fin >> a >> b;
    long long c1 = 1, c2 = 1;
    for(int i = 0;i<a.size();i++){
      c1 *= a[i]-64;
    }
    for(int i = 0;i<b.size();i++){
      c2 *= b[i]-64;
    }
    if(c1%47 == c2%47){
      fout<<"GO\n";
    } else fout<<"STAY\n";
    return 0;
}