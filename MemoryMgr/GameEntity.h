#ifndef GAMENTITY_H_
#define GAMENTITY_H_

#include "MemoryMgr.h"

class GameEntity {
 public:
  int someData, stuff[200];
  float moreData;

 private:
  DECLARE_HEAP;
};

class GameCamera : public GameEntity {
 public:
  int someMoreStuff;
  float andSomeMore;

 private:
  DECLARE_HEAP;
};

class GameActor : public GameEntity {
 public:
  char name[128], model[256];
  int  controller, state;

 private:
  DECLARE_HEAP;
};

#endif  // GAMENTITY_H_
