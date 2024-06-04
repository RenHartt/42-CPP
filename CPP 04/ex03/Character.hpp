/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgoron <bgoron@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/31 19:12:33 by bgoron            #+#    #+#             */
/*   Updated: 2024/06/04 15:26:42 by bgoron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include "AMateria.hpp"

class Character : public ICharacter
{
	public:
		Character(void);
		Character(const Character &copy);
		Character(std::string name);
		~Character(void);

		Character &operator=(const Character &copy);

		std::string const &getName(void) const;
		AMateria *getMateria(int idx) const;

		void equip(AMateria* m);
		void unequip(int idx);
		void use(int idx, ICharacter &target);

	private:
		std::string _name;
		AMateria *_materia[4];
};

#endif