#ifndef ANIMAL_HPP
#define ANIMAL_HPP


#include <iostream>


class Animal 
{
    protected:
        std::string type;
    public:
        Animal();
        Animal operator=(const Animal &copy);
        Animal(const Animal &copy);
        virtual ~Animal();

        Animal(std::string _type);
        virtual void makeSound() const;
        std::string getType() const;
};

#endif