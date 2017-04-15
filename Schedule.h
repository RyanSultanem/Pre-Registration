#pragma once

#include "Schedulable.h"

class Section;

class Schedule {

private:
	Schedulable* schedulable;

public:
	Schedule(Schedulable* schedulable);
	void generateSchedule();
	bool hasConflictWith(Section section);

};