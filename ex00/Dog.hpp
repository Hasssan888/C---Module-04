#ifndef DOG_HPP
#define DOG_HPP


#include "Animal.hpp"

class Dog : public Animal
{
    public:
        Dog();
        Dog operator=(const Dog &copy);
        Dog(const Dog &copy);
        ~Dog();

        Dog(std::string _type);
        void makeSound() const;
};

#endif