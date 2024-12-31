/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbakrim <hbakrim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/30 17:55:52 by hbakrim           #+#    #+#             */
/*   Updated: 2024/12/30 17:55:55 by hbakrim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP

#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource {
private:
    AMateria *templates[4];

public:
    MateriaSource();
    MateriaSource(MateriaSource const &other);
    MateriaSource &operator=(MateriaSource const &other);
    virtual ~MateriaSource();

    void learnMateria(AMateria *m) override;
    AMateria *createMateria(std::string const &type) override;
};

#endif // MATERIASOURCE_HPP