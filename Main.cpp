//#include <ctime>
#include "Leader.h"

//#include "Group.h"
//#include "Manager.h"
//
//void changeMark(Student& st) {
//	srand(time(NULL));
//	// [rand() % (max - min + 1)] + min
//	st.mark = rand() % 7 + 4;	
//}
//
int main() {

	Leader leader1("Alex", 15, 10,'m', "+34567889654", "alex@gmail.com");

	cout << leader1.getInfo() << endl;
	
	return 0;
}