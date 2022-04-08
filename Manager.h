#pragma once
#include "Header.h"
#include "Group.h"

class Manager
{
private:
	string name;
public:
	Manager(string name);

	double calculateAvgMark(Group group);
	double calculateAvgAge(Group group);
	double getCountOfMale(Group group);
	double getCountOfFemale(Group group);
};

