#include <iostream>
#include <string>
#include <sstream>
#include <vector>
#include <ctype.h>
#include "Action.cpp"
#include "Session.cpp"

public class Audio

  public static void greetStranger() {
    system("afplay alexis/hi_stranger.wav");
    system("afplay alexis/add_name.wav");
    //here we would attempt to add a new user to Session's userList
  }

  public static void greetUser() {
    system("afplay alexis/hi_jesse!.wav");
  }

  public static void greetDefault() {
    system("afplay alexis/hi!.wav");
  }

  public static void greetExcited() {
    system("afplay alexis/HI!(1).wav");
  }
};
