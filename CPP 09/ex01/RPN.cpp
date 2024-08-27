/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgoron <bgoron@42angouleme.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/23 15:00:54 by bgoron            #+#    #+#             */
/*   Updated: 2024/08/26 17:23:56 by bgoron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stack>
#include <iostream>

void RPN(const char *expression)
{
	std::stack<double> stack;
	double a, b;

	for (; *expression; expression++)
	{
		for (;*expression == ' '; expression++);

		if (isdigit(*expression))
		{
			stack.push(*expression - 48);
		}
		else if (*expression == '+' && stack.size() >= 2)
		{
			b = stack.top();
			stack.pop();
			a = stack.top();
			stack.pop();
			stack.push(a + b);
		}
		else if (*expression == '-' && stack.size() >= 2)
		{
			b = stack.top();
			stack.pop();
			a = stack.top();
			stack.pop();
			stack.push(a - b);
		}
		else if (*expression == '*' && stack.size() >= 2)
		{
			b = stack.top();
			stack.pop();
			a = stack.top();
			stack.pop();
			stack.push(a * b);
		}
		else if (*expression == '/' && stack.size() >= 2 && stack.top() != 0)
		{
			b = stack.top();
			stack.pop();
			a = stack.top();
			stack.pop();
			stack.push(a / b);
		}
		else
		{
			std::cerr << "Error" << std::endl;
			return ;
		}
	}

	if (stack.size() == 1)
	{
		std::cout << stack.top() << std::endl;
	}
	else
	{
		std::cerr << "Error" << std::endl;
	}
}
