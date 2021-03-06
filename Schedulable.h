#pragma once
#include<vector>
using namespace std;

class Section;

class Schedulable 
{

public:
	virtual vector<Section*> getSections() = 0;
	virtual Schedule* getSchedule() = 0;

};