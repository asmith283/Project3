#include "Event.h"


Event::Event()
{
}


Event::~Event()
{
}

Event::Event(string newTitle, int day, MONTH month, int year, int hour, int minutes, string descript) {
	title = newTitle;
	date.tm_mday = day;
	date.tm_mon = month;
	date.tm_year = year;
	date.tm_hour = hour;
	date.tm_min = minutes;
	description = descript;
}

void Event::displayEvent() {
	cout << "Event: " << title << endl;
	cout << "Date: " << MONTH(date.tm_mon) << " " << date.tm_mday << ", " << date.tm_year << endl;
	cout << "Time: " << date.tm_hour << ":" << date.tm_min << endl;
	cout << "Description: " << description << endl;
}

void Event::editTitle(string newTitle) {
	title = newTitle;
}

void Event::editDate(int day, MONTH month, int year, int hour, int minutes) {
	date.tm_mday = day;
	date.tm_mon = month;
	date.tm_year = year;
	date.tm_hour = hour;
	date.tm_min = minutes;
}

void Event::editDescript(string descript) {
	description = descript;
}
