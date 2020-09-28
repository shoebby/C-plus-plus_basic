#pragma once

class table {
private:
	int rowCount;
	int columnCount;
public:
	//amount of columns/rows changes based on entries.
	//Adding an entry with a new date adds a column, sorted from earliest to latest from the top downwards
	//Adding an additional entry on one date adds a row, sorting from earliest to the latest timeframe
};

class entry {
private:
	string content;
	int width, height;

public:
	//container for all the different information of a single entry

	string getContent();
	void setContent(string date, string timeframe, string moduleName, string location, string teacher, string description);
};

class Date {
private:
	int year;
	int month;
	int day;
public:
	//user enters the day, month, and year of the class taking place

	string getDate();
	void setDate(int year, int month, int day);
};

class Timeframe {
private:
	string startTime;
	string endTime;
public:
	//user enters a starting and ending time in the 00:00 format

	string getTimeframe();
	void setTimeframe(string startTime, string endTime);
};

class ModuleName {
private:
	string name;
public:
	//user enters/picks the module name

	string getModuleName();
	void setModuleName(string moduleName);
};

class Location {
private:
	int floor;
	int classroom;
public:
	//user enters/picks the location following the 0.00 format

	string getLocation();
	void setLocation(int floor, int classroom);
};

class Teacher {
private:
	string teacherForename;
	string teacherLastname;
public:
	//user enters/picks the teacher

	string getTeacher();
	void setTeacher(string forename, string lastname);
};

class Description {
private:
	string description;
public:
	//user enters an optional description of the module

	string getDesc();
	void setDesc(string description);
};