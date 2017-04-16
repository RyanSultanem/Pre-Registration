#pragma once


enum Day {
	MONDAY, TUESDAY, WEDNESDAY, THURSDAY, FRIDAY, SATURDAY, SUNDAY, DAYS_END
};

class TimeSlot
{
private:
	Day mDay;
	unsigned int mHour;
	unsigned int mMinutes;

public:
	TimeSlot();
	TimeSlot(Day day, unsigned int hour, unsigned int minutes);
};