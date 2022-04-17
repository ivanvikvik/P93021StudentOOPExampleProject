class Zoo;
class Shop;
class Animal;

class Animal {
	friend void Zoo::add(Animal animal);
	friend class Shop;
private:
	double power;
};

class Zoo {
	friend class Shop;

private:
	int countOfAnimal;

public:
	void add(Animal animal);
};

void Zoo::add(Animal animal) {
	//...
	double pow = animal.power;
}

class Shop {
public:
	void add(Animal animal) {
		Zoo zoo;
		zoo.countOfAnimal = 200;
		//...
		double pow = animal.power;
	}
};
