#pragma once

#include "Schedulable.h"
#include "Schedule.h"
#include "Section.hpp"
#include "Constraint.hpp"
#include <vector>

class Room : public Schedulable
{

private:
	std::vector<Section> sectionList;
	Schedule* schedule;
	Constraint* mConstraints; ///< constraints i.e: needComputers


public:
	std::vector<Section*> getSections() override;
	void setConstraint(Constraint * constraint);
	Constraint* getConstraint();


};