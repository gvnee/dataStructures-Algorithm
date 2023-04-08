/*
ID: gvne
PROG: gift1
LANG: C++                 
*/
#include<bits/stdc++.h>
#include<fstream>

using namespace std;

int main() {
  ifstream fin ("gift1.in");
  ofstream fout ("gift1.out");
  int n;
  fin>>n;
  unordered_map<string, int> bal;
  vector<string> order;
  string name;
  for(int i = 0;i<n;i++){
    fin>>name;
    bal[name] = 0;
    order.push_back(name);
  }
  int gift, c;
  for(int i = 0;i<n;i++){
    fin>>name;
    int gift, c;
    fin>>gift>>c;
    if(gift == 0) continue;
    bal[name] -= gift;
    bal[name] += gift%c;
    string rec;
    int amount = gift/c;
    while(c--){
      fin>>rec;
      bal[rec] += amount;
    }
  }

  for(auto name:order) fout<<name<<' '<<bal[name]<<"\n";
  
  return 0;
}