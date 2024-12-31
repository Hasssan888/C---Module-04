/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbakrim <hbakrim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/30 13:54:03 by hbakrim           #+#    #+#             */
/*   Updated: 2024/12/30 13:54:04 by hbakrim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : Animal("Cat"){
    std::cout << "Cat is created by default constructed" << std::endl;
}

Cat::Cat(std::string _type) : Animal(_type) {
    std::cout << "Cat has been created!" << std::endl;
}

Cat Cat::operator=(const Cat &copy) {
    if (this != &copy) {
        this->type = copy.type;
    }
    return *this;
}

Cat::Cat(const Cat &copy) : Animal(copy) {
    std::cout << "Cat copy constructor called" << std::endl;
    *this = copy;
}

Cat::~Cat() {
    std::cout << "Cat has been destroyed!" << std::endl;
}

void Cat::makeSound() const {
    std::cout << "Meow! Meow!" << std::endl;
}