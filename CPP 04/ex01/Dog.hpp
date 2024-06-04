/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgoron <bgoron@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/30 14:39:45 by bgoron            #+#    #+#             */
/*   Updated: 2024/06/04 15:21:54 by bgoron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include "Animal.hpp"
# include "Brain.hpp"

class Dog : public Animal
{
    public:
        Dog(void);
        Dog(const Dog &copy);
        ~Dog(void);

        Dog &operator=(const Dog &copy);

    private:
        void makeSound(void) const;
        Brain *_brain;
};

#endif