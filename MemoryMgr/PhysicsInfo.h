#ifndef PHYSICSINFO_H_
#define PHYSICSINFO_H_

#include "MemoryMgr.h"

struct Vector3d {
  float x, y, z;
};

class PhysicsInfo {
 public:
  Vector3d position, velocity, acceleration;
  bool bFlying;
  // More to be added here later.

 private:
  DECLARE_HEAP;
};

#endif  // PHYSICSINFO_H_
