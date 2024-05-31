/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgoron <bgoron@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/31 15:39:32 by bgoron            #+#    #+#             */
/*   Updated: 2024/05/31 15:39:33 by bgoron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

# include <iostream>

class WrongAnimal
{
    public:
        WrongAnimal(void);
        WrongAnimal(const WrongAnimal &copy);
        WrongAnimal(std::string type);
        virtual ~WrongAnimal(void);

        WrongAnimal &operator=(const WrongAnimal &copy);

        void makeSound(void) const;
        std::string getType(void) const;

    protected:
        std::string type;
};


#endif
