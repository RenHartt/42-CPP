/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgoron <bgoron@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/31 12:39:58 by bgoron            #+#    #+#             */
/*   Updated: 2024/07/17 19:38:00 by bgoron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>

class Animal
{
    public:
        Animal(void);
        Animal(const Animal &copy);
        virtual ~Animal(void);

        Animal &operator=(const Animal &copy);

        virtual void makeSound(void) const;
        std::string getType(void) const;

    protected:
        std::string type;
};

#endif
