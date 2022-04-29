#include "Leader.h"

Leader::Leader() {
	setName("no name");
	setAge(0);
	setMark(0);
	setSex('m');
	phoneNumber = "no phone number";
	e_mail = "no e-mail";
}

Leader::Leader(string name, int age, double mark, char sex, string phoneNumber, string e_mail) {
	setName(name);
	setAge(age);
	setMark(mark);
	setSex(sex);
	this->phoneNumber = phoneNumber;
	this->e_mail = e_mail;
}

Leader::~Leader() {
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


//string Leader::getInfo() {
//	return name + ": age = " + to_string(age)
//		+ "; mark = " + to_string(mark)
//		+ "; sex = " + (sex == 'm' ? "male" : "female")
//		+ "; phone number = " + phoneNumber
//		+ "; e-mail = " + e_mail;
//}
