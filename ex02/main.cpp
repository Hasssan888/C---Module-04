#include "AAnimal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main() {
    const AAnimal* j = new Dog();
    const AAnimal* i = new Cat();

    delete j; // should not create a leak
    delete i;

    const AAnimal* animals[10];
    for (int k = 0; k < 5; ++k) {
        animals[k] = new Dog();
        animals[k + 5] = new Cat();
    }

    for (int k = 0; k < 10; ++k) {
        delete animals[k];
    }

    return 0;
}