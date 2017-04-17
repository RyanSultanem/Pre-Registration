#include "Room.h"

std::vector<Section*> Room::getSections()
{
	
}

void Room::setConstraint(Constraint * constraint)
{
	mConstraints = constraint;
}

Constraint * Room::getConstraint()
{
	return mConstraints;
}