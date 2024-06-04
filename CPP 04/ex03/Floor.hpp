/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Floor.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgoron <bgoron@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/04 13:44:33 by bgoron            #+#    #+#             */
/*   Updated: 2024/06/04 15:15:43 by bgoron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FLOOR_HPP
# define FLOOR_HPP

# include "AMateria.hpp"

class Floor
{
	public:
		Floor(void);
		Floor(Floor const &copy);
		~Floor(void);

		Floor &operator=(Floor const &copy);

		void setFloor(AMateria *materia);
		AMateria *getFloor(int idx) const;

	private:
		AMateria *_floor[1000];
};

#endif