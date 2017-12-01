/*
  Author: Aryan Gupta
  Date: 11/29/17
  Zuul is a text-based adventure game in which the user has to enter commands to go through various rooms and win. 
  In this version the user is in a BTS (Korean boy band) concert and they have to give Suga (one of the members) his
  mic or the show won't go on.
 */

#include <iostream>
#include <cstring>

using namespace std;

int main() {

  // ask user for their name
  char name[25];
  cout << "----------------------------------------------------------------------------------------------" << endl;
  cout << "What is your name?" << endl;
  cout << "Enter your name please: ";
  cin.getline(name, 25);
  cout << "----------------------------------------------------------------------------------------------" << endl;
  
  // intro to game
  cout << "You are at a BTS concert! How long you have waited for this day! You arrived five minutes ago" << endl;
  cout << "and there is a lot of commotion. As you walk past security you see A.R.M.Y.s crying and others" << endl;
  cout << "fighing each other! What is going on? You ask one of the guards and he says that Suga can't" << endl;
  cout << "find his special mic and that he can't perform without it! They don't know where it is though." << endl;
  cout << "Wait! You see a black stick with a grey ball on it under a chaotic cluster of A.R.M.Y.s. Could" << endl;
  cout << "that be his mic? You crawl through the perlious terrain trying not to get crushed. You did it!" << endl;
  cout << "You pick up the stick and sure enough, it's Suga's mic! It is now up to you " << name << "!" << endl;
  cout << "A.R.M.Y.s are counting one you! More importantly, BTS is counting on you " << name << "!" << endl;
  cout << "The show must go on!" << endl;
  cout << "----------------------------------------------------------------------------------------------" << endl;

  // instructions
  cout << "---Here are the following commands you must use to progress throught the game---" << endl;
  cout << "Type (GO NORTH) to go north if an exit exists." << endl;
  cout << "Type (GO EAST) to go east if an exit exists." << endl;
  cout << "Type (GO SOUTH) to go south if an exits exists." << endl;
  cout << "Type (GO WEST) to go west if an exit exists." << endl;
  cout << "---Above are the commands used to navigate through the map---" << endl;
  cout << "Type (PICK) to pick up an item if there is one." << endl;
  cout << "Type (DROP) to drop an item if you have anything to drop or want to drop." << endl;
  cout << "Type (INVENTORY) to check what items you have." << endl;
  cout << "---Above are the commands used to interact with items---" << endl;
  cout << "Type (CURRENT ROOM) to check what room you are currently in." << endl;
  cout << "Type (QUIT) if you want to leave." << endl;
  cout << "*NOTE* Type all commands without the parantheses ()." << endl;
  cout << "----------------------------------------------------------------------------------------------" << endl;

  // game start
  cout << "Start..." << endl;
  
  // keep the game running until they win
  bool win = false;
  while (win == false) {
    // get what command they used
    char command[12];
    cin.getline(command, 12);
    // check what command was typed
    if (strcmp(command, "GO NORTH")) {
      cout << "Going north" << endl;
      cout << "----------------------------------------------------------------------------------------------" << endl;
    } else if (strcmp(command, "GO EAST")) {
      cout << "Going east" << endl;
      cout << "----------------------------------------------------------------------------------------------" << endl;
    } else if (strcmp(command, "GO SOUTH")) {
      cout << "Going south" << endl;
      cout << "----------------------------------------------------------------------------------------------" << endl;
    } else if (strcmp(command, "GO WEST")) {
      cout << "Going west" << endl;
      cout << "----------------------------------------------------------------------------------------------" << endl;
    } else if (strcmp(command, "CURRENT ROOM")) {
      cout << "You are currently in ____" << endl;
      cout << "----------------------------------------------------------------------------------------------" << endl;
    } else if (strcmp(command, "PICK")) {
      cout << "Picking up item" << endl;
      cout << "----------------------------------------------------------------------------------------------" << endl;
    } else if (strcmp(command, "DROP")) {
      cout << "dropping item" << endl;
      cout << "----------------------------------------------------------------------------------------------" << endl;
    } else if (strcmp(command, "INVENTORY")) {
      cout << "Checking inventory" << endl;
      cout << "----------------------------------------------------------------------------------------------" << endl;
    } else if (strcmp(command, "QUIT")) {
      char verify[3];
      cout << "Are you sure you want to leave (YES or NO)? All progress will be lost" << endl;
      cin.getline(verify, 3);
      if (strcmp(verify, "YES")) {
	cout << "Terminating game" << endl;
	cout << "----------------------------------------------------------------------------------------------" << endl;
	break;
      } else {
	cout << "Continuing game" << endl;
	cout << "----------------------------------------------------------------------------------------------" << endl;
	continue;
      }
    } else {
      cout << "Invalid command" << endl;
    }
  }
}
