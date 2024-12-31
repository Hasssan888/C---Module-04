/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbakrim <hbakrim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/30 17:34:02 by hbakrim           #+#    #+#             */
/*   Updated: 2024/12/30 17:42:35 by hbakrim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"

AAnimal::AAnimal() : type("Animal") {
    std::cout << "AAnimal constructor called" << std::endl;
}

AAnimal::AAnimal(std::string _type) : type(_type) {
    std::cout << "AAnimal has been created!" << std::endl;
}

AAnimal& AAnimal::operator=(const AAnimal &copy) {
    if (this != &copy) {
        this->type = copy.type;
    }
    return *this;
}

AAnimal::AAnimal(const AAnimal &copy) {
    std::cout << "AAnimal copy constructor called" << std::endl;
    *this = copy;
}


AAnimal::~AAnimal() {
    std::cout << "AAnimal destructor called" << std::endl;
}

std::string AAnimal::getType() const {
    return type;
}
