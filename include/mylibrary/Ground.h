//
// Created by faris on 5/4/2020.
//

#ifndef FINALPROJECT_GROUND_H
#define FINALPROJECT_GROUND_H
#include <Box2D/Box2D.h>
#include "string"
#include <mylibrary/Shape.h>
using namespace std;
class Ground : public Shape{
 public:
  Ground(b2World* world, int height, int width);
};

#endif  // FINALPROJECT_GROUND_H
