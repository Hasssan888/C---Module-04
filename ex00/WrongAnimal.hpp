/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbakrim <hbakrim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/30 14:22:38 by hbakrim           #+#    #+#             */
/*   Updated: 2024/12/30 14:28:45 by hbakrim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include <iostream>
#include <string>

class WrongAnimal {
protected:
    std::string type;

public:
    WrongAnimal();
    WrongAnimal(const WrongAnimal& copy);
    WrongAnimal operator=(const WrongAnimal& other);
    WrongAnimal::WrongAnimal(std::string _type);
    ~WrongAnimal();
    
    std::string getType() const;
    void makeSound() const;
};

#endif