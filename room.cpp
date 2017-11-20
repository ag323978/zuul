#include "room.h"
#include <cstring>

Room::Room(char* newName, char* newDescription, char* newExit, char* newNeighbor) {
  name = newName;
  description = newDescription;
  exit = newExit;
  neighbor = newNeighbor;
}

char* Room::getName() {
  return name;
}

char* Room::getDescription() {
  return description;
}

char* Room::getExit() {
  return exit;
}

char* Room::getNeighbor() {
  return neighbor;
}

