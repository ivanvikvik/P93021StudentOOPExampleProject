#include "Student.h"
#include "Group.h"
#include "Manager.h"

int main() {
	Group group("10b");
	Manager manager1("Mariya Ivanovna");

	Student st1("Alex", 14, 9, 'm');
	Student st2("Nastya", 13, 8, 'f');
	Student st3("Nikita", 15, 4, 'f');

	group.add(st1);
	group.add(st2);
	group.add(st3);
	
	cout << group.getInfo() << endl;
	
	int countM = manager1.getCountOfMale(group);
	int countF = manager1.getCountOfFemale(group);

	cout << "Count of male of group " << group.getName() 
		<< " = " << countM << endl;
	
	cout << "Count of female of group " << group.getName()
		<< " = " << countF << endl;


	return 0;
}