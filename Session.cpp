#include <iostream>
#include <string>
#include <sstream>
#include <vector>
#include <ctype.h>
#include <map>


public class Session {


  public struct userData {
    unordered_map<std::string, int> userMap;
    int numUsers;
    public userData() {
    numUsers = 0;
    }
  };
  public string user;
  public int camaraderie;
  userData * listUsers;
  void sth() {
    cout << "STH";
  }

  public Session() {
    user = NULL;
    camaraderie = 0;
    listUsers = new userData();
  }

  public void initialize(string user) {
    this->user = user;
    /*Here we would load in the user's camaraderie from our user data*/
  }

  public void incAffection() {

    camaraderie++;
    listUsers["user"] ++;
  }

  public void terminate() {
    //here we would save data into the map, but for now we just save camaraderi
    listUsers["user"] = camaraderie;
    this->user = "";
    camaraderie = 0;
  }

};
