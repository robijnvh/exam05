#include "BrickWall_test.hpp"

BrickWall::BrickWall(void) : ATarget("Target Practice BrickWall") {}

BrickWall::~BrickWall(void) {}

ATarget*     BrickWall::clone() const
{
    return new BrickWall(*this);
}