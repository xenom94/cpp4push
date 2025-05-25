#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"


int main()
{
	std::cout << "--- Animal test with virtual member function ---" << std::endl;
	const Animal* animal = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	std::cout << j->getType() << " says ";
	j->makeSound(); // will output the cat sound!
	std::cout << i->getType() << " says ";
	i->makeSound();
	std::cout << animal->getType() << " says ";
	animal->makeSound();

	delete i;
	delete j;
	delete animal;


	std::cout << "--- wrong animal test (non virtual member function) ---" << std::endl;
	const WrongAnimal* wrong = new WrongCat();
	std::cout << wrong->getType() << " says ";
	wrong->makeSound();
	delete wrong;

	return 0;
}
