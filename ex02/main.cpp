#include "Cat.hpp"
#include "Dog.hpp"

int main()
{
	std::cout << "----CONSTRUCTORS CALL---" << std::endl;
	const AAnimal* a = new Dog();
	const AAnimal* b = new Cat();
	std::cout << "---DESTRUCTORS CALL---" << std::endl;
	delete a;
	delete b;
	std::cout << "-----CONSTRUCTORS CALL FOR CAT-----" << std::endl;

	AAnimal *animals[4];

	for (int i = 0; i < 2; i++) {
		animals[i] = new Cat();
	}
	std::cout << "-----CONSTRUCTORS CALL FOR DOG-----" << std::endl;
	for (int i = 2; i < 4; i++) {
		animals[i] = new Dog();
	}

	std::cout << "----PROPER SOUND FOR EACH ANIMAL----" << std::endl;
	for (int i = 0; i < 4; i++) {
		std::cout << animals[i]->getType() << " says ";
		animals[i]->makeSound(); 
	}
	std::cout << "---DESTRUCTORS CALL---" << std::endl;

	for (int i = 0; i < 4; i++) {
		delete animals[i];
	}


	return 0;
}
