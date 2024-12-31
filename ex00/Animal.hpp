/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbakrim <hbakrim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/30 13:50:38 by hbakrim           #+#    #+#             */
/*   Updated: 2024/12/30 13:53:43 by hbakrim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>

class Animal 
{
    protected:
        std::string type;
    public:
        Animal();
        Animal(const Animal &copy);
        Animal operator=(const Animal &copy);
        virtual ~Animal();

        Animal(std::string _type);
        virtual void makeSound() const;
        std::string getType() const;
};

#endif