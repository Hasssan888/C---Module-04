/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbakrim <hbakrim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/30 17:50:34 by hbakrim           #+#    #+#             */
/*   Updated: 2024/12/30 17:50:46 by hbakrim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria(std::string const &type) : type(type) {}

AMateria::~AMateria() {}

std::string const &AMateria::getType() const {
    return type;
}

void AMateria::use(ICharacter &target) {
    std::cout << "[Generic Materia used on " << target.getName() << "]" << std::endl;
}
