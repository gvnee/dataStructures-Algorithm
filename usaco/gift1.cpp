/*
ID: gvne
PROG: gift1
LANG: C++                 
*/
#include<bits/stdc++.h>
#include<fstream>

using namespace std;

int main() {
    ifstream fin ("gift.in");
    ofstream fout ("gift.out");
    int n;
    fin>>n;
    unordered_map<string, int> lookup;
    string name;
    vector<pair<string, int>> people;
    for(int i = 0;i<n;i++){
      fin>>name;
      lookup[name] = i;
      people[i] = {name, 0};
    }
    string temp;
    int friends_count;
    int money;
    for(int i = 0;i<n;i++){
      fin>>name;
      fin>>money>>friends_count;
      if(money == 0) continue;
      string temp1 = people[lookup[name]].first;
      int temp2 = people[lookup[name]].second;
      temp2 -= money;
      temp2 += money%friends_count;
      people[lookup[name]] = {temp1, temp2};
      for(int j = 0;j<friends_count;j++){
        fin>>temp;
        string temp1 = people[lookup[temp]].first;
        int temp2 = people[lookup[temp]].second;
        temp2 += money/friends_count;
        people[lookup[temp]] = {temp1, temp2};
      }
    }
    for(auto it:people)
      fout<<it.first<<' '<<it.second<<"\n";
    
    return 0;
}