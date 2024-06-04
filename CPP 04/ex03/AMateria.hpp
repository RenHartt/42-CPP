/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgoron <bgoron@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/31 19:01:24 by bgoron            #+#    #+#             */
/*   Updated: 2024/06/04 15:14:15 by bgoron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
# define AMATERIA_HPP

# include "ICharacter.hpp"

class AMateria
{
	public:
		AMateria(std::string const & type);
		AMateria(const AMateria &copy);
		virtual ~AMateria(void);

		std::string const &getType(void) const;

		virtual AMateria* clone(void) const = 0;
		virtual void use(ICharacter &target);

	protected:
		std::string type;
};

#endif