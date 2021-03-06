#pragma once

#include "Schedulable.h"
#include "Schedule.h"
#include "Section.hpp"
#include "Constraint.hpp"
#include <vector>

class Room : public Schedulable
{

private:
	std::vector<Section*> mSectionList;
	Schedule* mSchedule;
	Constraint* mConstraints; ///< constraints i.e: needComputers


public:
	std::vector<Section*> getSections() override;
	void addSection(Section* section);
	void removeSection(Section* section);
	void setConstraint(Constraint * constraint);
	Schedule* getSchedule() override;
	Constraint* getConstraint();
};