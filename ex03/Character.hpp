/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbakrim <hbakrim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/30 17:54:07 by hbakrim           #+#    #+#             */
/*   Updated: 2024/12/30 17:54:09 by hbakrim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include "ICharacter.hpp"
#include "AMateria.hpp"

class Character : public ICharacter {
private:
    std::string name;
    AMateria *inventory[4];

public:
    Character(std::string const &name);
    Character(Character const &other);
    Character &operator=(Character const &other);
    virtual ~Character();

    std::string const &getName() const override;
    void equip(AMateria *m) override;
    void unequip(int idx) override;
    void use(int idx, ICharacter &target) override;
};

#endif // CHARACTER_HPP