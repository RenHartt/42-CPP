/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baptistegoron <baptistegoron@42angouleme.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/07 19:13:32 by baptistegoron     #+#    #+#             */
/*   Updated: 2024/08/08 14:17:43 by baptistegoron    ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

#include <stack>

template <typename T>
class MutantStack : public std::stack<T>
{
	public :
		MutantStack<T>(void);
		MutantStack<T>(const MutantStack<T> &copy);
		~MutantStack(void);

		MutantStack &operator=(const MutantStack<T> &copy);
};

#endif
