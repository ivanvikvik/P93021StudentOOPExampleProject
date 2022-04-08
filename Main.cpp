#include "Student.h"

int main() {
	Student st1("Alex", 14, 9);
	Student st2("Nastya", 13, 8);
	Student st3("Nikita", 15, 4);

	cout << st1.getInfo() << endl;
	cout << st2.getInfo() << endl;
	cout << st3.getInfo() << endl;

	return 0;
}