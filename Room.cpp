#include "Room.h"

std::vector<Section*> Room::getSections()
{
	return mSectionList;
}

void Room::addSection(Section * section)
{
	vector<Section*>::iterator index = std::find(mSectionList.begin(), mSectionList.end(), section);
	if (index == mSectionList.end())
	{
		mSectionList.push_back(section);
	}
	
}

void Room::removeSection(Section * section)
{
	vector<Section*>::iterator index = std::find(mSectionList.begin(), mSectionList.end(), section);

	if (index != mSectionList.end()) 
	{
		mSectionList.erase(index);
	}
	
}

void Room::setConstraint(Constraint * constraint)
{
	mConstraints = constraint;
}

Schedule* Room::getSchedule()
{
	mSchedule->generateSchedule();
	return mSchedule;
}

Constraint * Room::getConstraint()
{
	return mConstraints;
}