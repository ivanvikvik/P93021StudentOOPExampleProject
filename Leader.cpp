#include "Leader.h"

Leader::Leader() {
	name = "no name";
	age = 0;
	mark = 0;
	sex = 'm';
	phoneNumber = "no phone number";
	e_mail = "no e-mail";
}

Leader::Leader(string name, int age, double mark, char sex, string phoneNumber, string e_mail) {
	this->name = name;
	this->age = age;
	this->mark = mark;
	this->sex = sex;
	this->phoneNumber = phoneNumber;
	this->e_mail = e_mail;
}

Leader::~Leader() {
}

string Leader::getName() {
	return name;
}

void Leader::setName(string initName) {
	this->name = name;
}

int Leader::getAge() {
	return age;
}

void Leader::setAge(int age) {
	//if (age >= MIN_STUDENT_AGE
	//	&& age <= MAX_STUDENT_AGE) {
		this->age = age;
	//}
}

double Leader::getMark() {
	return mark;
}

void Leader::setMark(double mark) {
	//if (mark >= MIN_MARK && mark <= MAX_MARK) {
		this->mark = mark;
	//}
}
char Leader::getSex() {
	return sex;
}

void Leader::setSex(char sex) {
	if (sex == 'm' || sex == 'f') {
		this->sex = sex;
	}
}

string Leader::getPhoneNumber() {
	return phoneNumber;
}

void Leader::setPhoneNumber(string phoneNumber) {
	this->phoneNumber = phoneNumber;
}

string Leader::getEmail() {
	return e_mail;
}

void Leader::setEmail(string e_mail) {
	this->e_mail = e_mail;
}

string Leader::getInfo() {
	return name + ": age = " + to_string(age)
		+ "; mark = " + to_string(mark)
		+ "; sex = " + (sex == 'm' ? "male" : "female")
		+ "; phone number = " + phoneNumber
		+ "; e-mail = " + e_mail;
}
