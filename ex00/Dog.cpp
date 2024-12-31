/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbakrim <hbakrim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/30 13:55:21 by hbakrim           #+#    #+#             */
/*   Updated: 2024/12/30 13:55:22 by hbakrim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : Animal("Dog"){
    std::cout << "Dog is created by default constructed" << std::endl;
}

Dog::Dog(std::string _type) : Animal(_type) {
    std::cout << "Dog has been created!" << std::endl;
}

Dog Dog::operator=(const Dog &copy) {
    if (this != &copy) {
        this->type = copy.type;
    }
    return *this;
}

Dog::Dog(const Dog &copy) : Animal(copy) {
    std::cout << "Dog copy constructor called" << std::endl;
    *this = copy;
}

Dog::~Dog() {
    std::cout << "Dog has been destroyed!" << std::endl;
}

void Dog::makeSound() const {
    std::cout << "Woof! Woof!" << std::endl;
}