//#include "Header.h"
//
//class Hero {
//	friend void main(void);
//private:
//	int* weaks;
//	int size;
//public:
//	Hero() {
//		size = 5;
//		weaks = new int[size];
//	}
//
//	~Hero() {
//		delete[] weaks;
//		size = 0;
//	}
//};
//
//void somethingStrange(Hero& hero) {
//	//...
//}
//
//void main() {
//	Hero hero;
//
//	for (int i = 0; i < hero.size; i++)
//	{
//		hero.weaks[i] = i;
//	}
//
//	somethingStrange(hero);
//
//	for (int i = 0; i < hero.size; i++)
//	{
//		cout << hero.weaks[i] << " " << endl;
//	}
//}