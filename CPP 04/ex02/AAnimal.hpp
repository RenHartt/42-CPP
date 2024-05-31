/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgoron <bgoron@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/31 12:39:58 by bgoron            #+#    #+#             */
/*   Updated: 2024/05/31 18:52:17 by bgoron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AANIMAL_HPP
# define AANIMAL_HPP

# include <iostream>

class AAnimal
{
    public:
        AAnimal(void);
        AAnimal(const AAnimal &copy);
        virtual ~AAnimal(void);

        AAnimal &operator=(const AAnimal &copy);

        virtual void makeSound(void) const = 0;
        std::string getType(void) const;

    protected:
        std::string type;
};

#endif