#ifndef ROOM_H
#define ROOM_H
#include <cstring>

class Room{
 public:
  Room(char* newName, char* newDescription, char* newExit, char* newNeighbor);
  char* getName();
  char* getDescription();
  char* getExit();
  char* getNeighbor();
  void setExit();
 private:
  char* name;
  char* description;
  char* exit;
  char* neighbor;
};

#endif
