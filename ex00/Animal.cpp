/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbakrim <hbakrim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/30 13:50:33 by hbakrim           #+#    #+#             */
/*   Updated: 2024/12/30 14:23:15 by hbakrim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal() : type("") {
    std::cout << "Animal is created by default constructed" << std::endl;
}

Animal::Animal(std::string _type) : type(_type) {
    std::cout << "Animal has been created!" << std::endl;
}

Animal Animal::operator=(const Animal &copy) {
    if (this != &copy) {
        this->type = copy.type;
    }
    return *this;
}

Animal::Animal(const Animal &copy) {
    std::cout << "Animal copy constructor called" << std::endl;
    *this = copy;
}

Animal::~Animal() {
    std::cout << "Animal has been destroyed!" << std::endl;
}

void Animal::makeSound() const {
    std::cout << "Animal makes a sound!" << std::endl;
}

std::string  Animal::getType() const{
    return type;
}