/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgoron <bgoron@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/31 19:13:09 by bgoron            #+#    #+#             */
/*   Updated: 2024/06/04 15:18:25 by bgoron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

# include "AMateria.hpp"
# include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
	public:
		MateriaSource(void);
		MateriaSource(const MateriaSource &copy);
		~MateriaSource(void);

		MateriaSource &operator=(const MateriaSource &copy);

		void learnMateria(AMateria*);
		AMateria* createMateria(std::string const &type);

	private:
		AMateria *_materia[4];
};

#endif