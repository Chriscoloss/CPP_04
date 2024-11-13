/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chorst <chorst@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 12:23:24 by chorst            #+#    #+#             */
/*   Updated: 2024/11/07 11:57:45 by chorst           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
	_type = "Cat";
	std::cout << G << "Cat constructor called" << D << std::endl;
}

Cat::Cat(const Cat& original)
{
	std::cout << "Cat copy constructor called" << std::endl;
	*this = original;
}

Cat& Cat::operator=(const Cat& original)
{
	std::cout << "Cat assignation operator called" << std::endl;
	Animal::operator=(original);
	return (*this);
}

Cat::~Cat()
{
	std::cout << R << "Cat destructor called" << D << std::endl;
}

void Cat::makeSound() const
{
	std::cout << "miaauuuu" << std::endl;
}
