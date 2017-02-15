
#include <iostream>
#include <string>
#include <sstream>
#include <vector>
#include <ctype.h>
#include "Session.cpp"
/*
 * String library useful
 * Query Type: greeting, question, demand, unknown
 */
 using namespace std;
// Constants
struct Session{
  string user;
  int camaraderie;
  void sth(){
    cout << "STH";
  }
};
/* Function Declarations */
vector<string> tokenize(string s);
bool isGreeting(vector<string> res, vector<string> greetings);
bool matchString(vector<string> res, string word);
void reaction(Session* current, string type);

int main(){

vector<string> greetings;
string strArr[] = {"hello", "hi", "hey", "morning"};
int i = 0;
int maxLen = sizeof(strArr)/sizeof(strArr[0]);
while( i <= maxLen ){
  greetings.push_back(strArr[i]);
  i++;
}

    string s = "";
    Session* sesh = new Session();
    Action act(sesh);

    vector<string> result;
    istringstream iss(s); // String Stream
    std::string name;
    // while(getline(std::cin, name)){
    //   cout << name << "\n";
    // }
    string messageVar("Starter");
    while (messageVar != ""){
      cout << "Type your message: ";
      // cin.ignore();
      getline(cin, messageVar);
       result = tokenize(messageVar);
      if(matchString(result, "add:jesse")){
        sesh->user = "Jesse";
        cout << "Session started with: Jesse";
      }
      if(isGreeting(result, greetings)){
        reaction(sesh, "greeting");
        cout << "Success!";
      }
    }

        result = tokenize(s);
        // cout << result[0] << "Hello" ;
        // cout << result[1] << "Yo";
        // cout << result[2] << "Yo";
        if(isGreeting(result, greetings)) cout << "Success!";
    };




	/*
	* Loops through greetings list to see if the user input a greeting
	*/
    bool isGreeting(vector<string> res, vector<string> greetings){
      bool foundGreeting = false;
      for(vector<string>::iterator it = res.begin(); it != res.end(); ++it) {
        // cout << *it;
        for(vector<string>::iterator it2 = greetings.begin(); it2 != greetings.end(); ++it2) {
          if((*it) == (*it2)) foundGreeting = true;
        }
      }
      return foundGreeting;
    };

    bool matchString(vector<string> res, string word){
      bool foundGreeting = false;
      for(vector<string>::iterator it = res.begin(); it != res.end(); ++it) {
        // cout << *it;
        if(*it==word) foundGreeting = true;
      }
      return foundGreeting;
    };

/* Tokenizes and transforms all text to lowercase
 */
vector<string> tokenize(string s){
  vector<string> result;
  istringstream iss(s); // String Stream
  string b = s;
  for(; iss >> s; )
    for (int i=0; s[i]; ++i){
      b[i] = tolower(s[i]);
      cout<< b[i];
    }
    cout << b;
    result.push_back(b);
  return result;
};

void reaction(Session* current, string type, vector<string> res){
  if(type=="greeting"){
	  act.callGreeting();
  } 
  else if(type=="question") {                             // QUESTION

  
  } else if(type=="chitchat") {                             // QUESTION

  }
};


/* What if we added a running "points" total -- to the robot?  per session. */
/* Look in a table/database for affection */
