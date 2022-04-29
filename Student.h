#pragma once
#include "Header.h"

class Student {
	friend void changeMark(Student& st);

private:
	// 1) static field definition
	static int count;
	
	string name;
	int age;
	double mark;
	char sex;

public:
	static const int MIN_MARK = 0;
	static const int MAX_MARK = 10;
	
	static const int MIN_STUDENT_AGE = 13;
	static const int MAX_STUDENT_AGE = 80;
	
	Student();
	Student(string name, int age, double mark, char sex);
	~Student();

	// 2) static method definition
	static int getCount();

	string getName();
	void setName(string name);

	int getAge();
	void setAge(int age);

	double getMark();
	void setMark(double mark);

	char getSex();
	void setSex(char sex);

	string getInfo();
};