/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baptistegoron <baptistegoron@42angouleme.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/07 19:13:32 by baptistegoron     #+#    #+#             */
/*   Updated: 2024/08/09 16:40:33 by bgoron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# include <stack>

template <typename T>
class MutantStack : public std::stack<T>
{
	public :
		MutantStack<T>(void);
		MutantStack<T>(const MutantStack &copy);
		~MutantStack<T>(void);

		MutantStack &operator=(const MutantStack &copy);
	private:

};

# include "MutantStack.tpp"

#endif
