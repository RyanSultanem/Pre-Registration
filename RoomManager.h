#pragma once
#include "Room.h"

class Section;

class RoomManager
{
private:
	static RoomManager* sRoomManager;
	RoomManager();
	vector<Room*> mRooms;

	//Constraint checker used when assigning rooms to sections
	bool constraintChecker(Section* section, Room* room);

public:
	static RoomManager* getInstance();

	void addRoom(Room* room);
	void removeRoom(Room* room);
	vector<Room*> getRooms();
	void assignRoom(Section* section);
};
