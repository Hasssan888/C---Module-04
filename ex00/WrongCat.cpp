/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbakrim <hbakrim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/30 14:22:43 by hbakrim           #+#    #+#             */
/*   Updated: 2024/12/30 14:37:14 by hbakrim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat() {
    type = "WrongCat";
    std::cout << "WrongCat constructor called" << std::endl;
}

WrongCat WrongCat::operator=(const WrongCat &copy) {
    if (this != &copy) {
        this->type = copy.type;
    }
    return *this;
}

WrongCat::WrongCat(std::string _type) : WrongAnimal(_type) {
    std::cout << "WrongCat has been created!" << std::endl;
}

WrongCat::WrongCat(const WrongCat &other) : WrongAnimal(other){
    std::cout << "WrongCat copy constructor called" << std::endl;
    *this = other;
}

WrongCat::~WrongCat() {
    std::cout << "WrongCat destructor called" << std::endl;
}

void WrongCat::makeSound() const {
    std::cout << "WrongAnimal makes a generic sound" << std::endl;
}
