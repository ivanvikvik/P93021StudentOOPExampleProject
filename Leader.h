#pragma once
#include "Student.h"

class Leader : public Student
{
private:
	string phoneNumber;
	string e_mail;

public:
	Leader();
	Leader(string name, int age, double mark, char sex, string phoneNumber, string e_mail);
	~Leader();

	string getPhoneNumber();
	void setPhoneNumber(string phoneNumber);

	string getEmail();
	void setEmail(string e_mail);

};