/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbakrim <hbakrim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/28 14:54:07 by hbakrim           #+#    #+#             */
/*   Updated: 2024/12/30 13:57:51 by hbakrim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
int main()
{
    const Animal* meta = new Animal();
    const Animal* j = new Dog();
    const Animal* i = new Cat();
    std::cout << j->getType() << " " << std::endl;
    std::cout << i->getType() << " " << std::endl;
    i->makeSound(); //will output the cat sound!
    j->makeSound();
    meta->makeSound();

    delete meta;
    delete j;
    delete i;

    // const WrongAnimal* wrongMeta = new WrongAnimal();
    // const WrongAnimal* wrongCat = new WrongCat();

    // std::cout << wrongCat->getType() << " " << std::endl;

    // wrongCat->makeSound(); // will output the WrongAnimal sound
    // wrongMeta->makeSound();

    // delete wrongMeta;
    // delete wrongCat;
    // return 0;
}