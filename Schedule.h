#pragma once

#include "Schedulable.h"
#include "TimeSlot.h"

class Section;

class Schedule {

private:
	Schedulable* mSchedulable;
	vector<TimeSlot> mTimeSlots;
	bool mContainsConflict;

public:
	Schedule(Schedulable* schedulable);
	void generateSchedule();
	bool hasConflictWith(Section section);
	bool hasConflictWith(TimeSlot timeSlot);
	bool hasConflictWith(vector<TimeSlot> timeSlots);
};