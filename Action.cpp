#include <iostream>
#include <string>
#include <sstream>
#include <vector>
#include <ctype.h>
#include "Session.cpp"
#include "Audio.cpp"

public class Action {


  std::string res;
  Session* session;

  public Action(Session* session) {
      this->session = session;
  }

  public void callQuestion(std::string res) {
	  if (current->user.empty()) { // No user selected
		  //some sort of response which may prevent some functions for strangers
	  }
	  else {
		  // Initialize up at beginning of function Action a = new Action(Session s, str);
		  //thread t = new thread(action.callQuestion);
	  }
  }

  public void callChitChat(std::string res) {
	  if (current->user.empty()) { // No user selected
		  //some sort of friendly small talk, nothing personal

	  }
	  else {
		  // Currently hardcoded to Jesse, should use current.user
		  //Uses some information about the user, based on affection?
	  }
  }

  public void callGreeting(std::string res) {
	  //res is an additional string argument(in addition to session user's name)
	  if (session->user.empty()) { // No user selected
		  thread t = new thread(Audio.greetStranger); 
	  }
	  else {
		  // Currently hardcoded to Jesse, should use current.user
		  switch (session->camaraderie) {
		  case 0:
			  thread t = new thread(Audio.greetUser);
			  break;
		  case 1:
			  thread t = new thread(Audio.greetDefault);
			  break;
		  case 2:
			  thread t = new thread(Audio.greetExcited);
			  break;
		  }
		  current->camaraderie = ((current->camaraderie) + 1) % 3;
	  }

  }

};
