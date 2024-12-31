/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbakrim <hbakrim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/30 17:34:07 by hbakrim           #+#    #+#             */
/*   Updated: 2024/12/30 17:42:25 by hbakrim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AANIMAL_HPP
#define AANIMAL_HPP

#include <iostream>
#include <string>

class AAnimal {
protected:
    std::string type;

public:
    AAnimal();
    AAnimal& operator=(const AAnimal &copy);
    AAnimal(const AAnimal &copy);
    virtual ~AAnimal();

    AAnimal(std::string _type);
    std::string getType() const;
    virtual void makeSound() const = 0; 
};

#endif