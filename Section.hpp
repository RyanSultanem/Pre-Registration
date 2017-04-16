#pragma once
#include "Room.h"
#include <vector>
#include <algorithm>
//#include "Professor.hpp"
#include "TimeSlots.h"

class Professor;

class Section
{
public:
	enum Status { Tentative, Definite, STATUS_END };

	bool addTimeSlot(TimeSlot* timeslot);
	bool removeTimeSlot(TimeSlot* timeslot);

	void setStatus(Status status);
	Status getStatus();

	int getSectionCode();

	void setSectionCapacity(int capacity);
	int getSectionCapacity();

	void setRoom(Room* room);
	Room* getRoom();

	void setProfessor(Professor* professor);
	Professor* getProfessor();

	Section(int input_sectionCode);
	~Section();

private:
	int mSectionCode; ///< section code
	int mCapacity; ///< section capacity
	Room* mRoom; ///< Room used for the section
	Professor* mProfessor;
	Status mStatus; ///< section status
	std::vector<TimeSlot *> mTimeSlots; ///< time slots of the schedule of the section




};

