#include "Student.h"
#include "Group.h"
#include "Manager.h"

int main() {
	{
		Student st1("Alex", 14, 9, 'm');
	}
	Student st2("Nastya", 13, 8, 'f');
	Student st3("Nikita", 15, 4, 'm');
	cout << "Count: " << Student::getCount() << endl;

	/*Group group("10b");
	Manager manager1("Mariya Ivanovna");

	Student st4;

	group.add(st1);
	group.add(st2);
	group.add(st3);
	*/   
	/*cout << group.getInfo() << endl;

	int countM = manager1.getCountOfMale(group);

	cout << "Count of male of group " << group.getName()
		<< " = " << countM << endl;*/

	
	return 0;
}