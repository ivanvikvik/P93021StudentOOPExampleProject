#pragma once
#include "Header.h"
#include "Student.h"

class Group
{
private:
	string name;
	int size;
	Student* list;
public:
	Group();
	Group(string name);
	Group(string name, Student* list, int size);
	~Group();

	string getName();
	void setName(string name);
	int getSize();
	Student get(int index);
	void set(int index, Student student);
	void add(Student student);

	void sortByStudentNameAsc();
	void sortByStudentNameDesc();
	void sortByStudentMarkAsc();
	void sortByStudentMarkDesc();
	Student getMaxAgeStudent();
	Student getMinAgeStudent();
	double calcAvgAgeOfStudents();
};