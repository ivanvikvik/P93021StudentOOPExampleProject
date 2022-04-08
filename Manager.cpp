#include "Manager.h"

Manager::Manager(string name){
	this->name = name;
}

double Manager::calculateAvgMark(Group group){
	double avg = 0;

	for (int i = 0; i < group.getSize(); i++)
	{
		avg += group.get(i).getMark();
	}

	avg /= group.getSize();

	return avg;
}

double Manager::calculateAvgAge(Group group){
	double avg = 0;

	for (int i = 0; i < group.getSize(); i++)
	{
		avg += group.get(i).getAge();
	}

	avg /= group.getSize();
}

double Manager::getCountOfMale(Group group){
	int count = 0;
	for (int i = 0; i < group.getSize(); i++)
	{
		if (group.get(i).getSex() == 'm') {
			count++;
		}
	}

	return count;
}

double Manager::getCountOfFemale(Group group) {
	return group.getSize() - getCountOfMale(group);
}