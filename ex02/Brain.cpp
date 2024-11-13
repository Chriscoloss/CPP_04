/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chorst <chorst@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 12:58:17 by chorst            #+#    #+#             */
/*   Updated: 2024/11/11 15:28:45 by chorst           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
	std::cout << G << "Brain constructor called" << D << std::endl;
}

Brain::Brain(const Brain& original)
{
	std::cout << G << "Brain copy constructor called" << D << std::endl;
	*this = original;
}

Brain& Brain::operator=(const Brain& original)
{
	std::cout << G <<"Brain assignment operator called" << D << std::endl;
	for (int i = 0; i < 100; i++)
		ideas[i] = original.ideas[i];
	return (*this);
}

Brain::~Brain()
{
	std::cout << R << "Brain destructor called" << D << std::endl;
}

void Brain::setIdeas(int index, std::string idea)
{
	ideas[index] = idea;
}

std::string Brain::getIdeas(int index) const
{
	return (ideas[index]);
}
