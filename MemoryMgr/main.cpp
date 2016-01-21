#include "MemoryMgr.h"
#include "HeapFactory.h"
#include "GameEntity.h"
#include "PhysicsInfo.h"

int main() {
  int bookmark = HeapFactory::GetMemoryBookmark();

  // This is just a normal allocation; goes in the root heap:
  char *pText = new char[1024];

  // This allocation should automatically go in the physics info heap:
  PhysicsInfo *pPhysics = new PhysicsInfo;

  // These allocations should automatically go into their hierarchical heaps:
  GameEntity *pEntity = new GameEntity;
  GameEntity *pCamera = new GameCamera;
  GameEntity *pCamera2 = new GameCamera;
  const int numActors = 20;
  GameEntity *pActor[numActors];
  for (int i = 0; i < numActors; ++i) {
    pActor[i] = new GameActor;
  }

  // Custom allocation in a specific heap:
  Heap *pHeap = HeapFactory::CreateHeap("CustomHeap");
  int *pBuffer = new (pHeap) int[512];

  HeapFactory::PrintInfo();

  // Delete all the things:
  delete pBuffer;
  for (int j = 0; j < numActors; ++j) {
    delete pActor[j];
  }
  delete pCamera;
  delete pCamera2;
  delete pEntity;
  delete pPhysics;
  delete pText;

  HeapFactory::PrintInfo();
  HeapFactory::ReportMemoryLeaks(bookmark);

  return 0;
}
