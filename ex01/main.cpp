/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbakrim <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/28 14:54:07 by hbakrim           #+#    #+#             */
/*   Updated: 2024/12/28 14:54:09 by hbakrim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main() {
    const Animal* j = new Dog();
    const Animal* i = new Cat();

    delete j; // should not create a leak
    delete i;

    const Animal* animals[10];
    for (int k = 0; k < 5; ++k) {
        animals[k] = new Dog();
        animals[k + 5] = new Cat();
    }

    for (int k = 0; k < 10; ++k) {
        delete animals[k];
    }

    return 0;
}
