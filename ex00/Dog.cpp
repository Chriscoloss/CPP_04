/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chorst <chorst@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 12:22:45 by chorst            #+#    #+#             */
/*   Updated: 2024/11/07 12:02:46 by chorst           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
	_type = "Dog";
	std::cout << G << "Dog constructor called" << D << std::endl;
}

Dog::Dog(const Dog& original)
{
	std::cout << "Dog copy constructor called" << std::endl;
	*this = original;
}

Dog& Dog::operator=(const Dog& original)
{
	std::cout << "Dog assignation operator called" << std::endl;
	Animal::operator=(original);
	return (*this);
}

Dog::~Dog()
{
	std::cout << R << "Dog destructor called" << D << std::endl;
}

void Dog::makeSound() const
{
	std::cout << "wuff wuff" << std::endl;
}
