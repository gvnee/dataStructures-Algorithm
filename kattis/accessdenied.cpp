#include<bits/stdc++.h>
using namespace std;

bool denied = true;

const int wrongLengthTime = 5;

string chars = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";

int getTime(string res){
  int time = 0;
  for(int i = 15;i<res.size();i++){
    if(res[i] < 58 && res[i]>47){
      time *= 10;
      time += (int) res[i];
    }
    else return time;
  }
}

bool guessLength(string response){
  if(getTime(response) != wrongLengthTime) return true;
  else return false;
}

string sendGuess(string guess){
  cout<<guess;
  string response;
  cin>>response;
  return response;
}

int main(){

  string guess = "";
  string response;

  bool foundLength = false;

  while(!foundLength){
    guess += "0";
    response = sendGuess(guess);
    if(response == "ACCESS GRANTED") return 0;
    foundLength = guessLength(response);
  }

  int length = guess.size();

  int currentGuessing = 0;
  int timeTook = 0;
  int previousGuessing = 0;
  int next = 0;
  while(true){
    response = (sendGuess(guess));
    timeTook = getTime(response);

    if(timeTook <= 10){
      currentGuessing = 0;
    }
    else currentGuessing = (timeTook - 14)/8;

    if(currentGuessing != previousGuessing){
      next = 0;
    }
    
    guess[currentGuessing] = chars[next];
    next++;
    
    
    if(response == "ACCESS GRANTED") return 0;
  }


  return 0;
}