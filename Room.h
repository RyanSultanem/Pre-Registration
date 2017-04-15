#pragma once

#include "Schedulable.h"
#include "Schedule.h"

class Room : public Schedulable{

private:
	vector<Section> sectionList;
	Schedule* schedule;

public:
	vector<Section> getSections() override;


};