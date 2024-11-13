/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chorst <chorst@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 12:21:31 by chorst            #+#    #+#             */
/*   Updated: 2024/11/08 11:10:53 by chorst           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal() : _type("Budderbread")
{
	std::cout << G << "Animal constructor called" << D << std::endl;
}

Animal::Animal(const Animal& original)
{
	std::cout << "Animal copy constructor called" << std::endl;
	*this = original;
}

Animal& Animal::operator=(const Animal& original)
{
	std::cout << "Animal assignation operator called" << std::endl;
	_type = original._type;
	return (*this);
}

Animal::~Animal()
{
	std::cout << R << "Animal destructor called" << D << std::endl;
}

std::string	Animal::getType() const
{
	return (_type);
}

void	Animal::makeSound() const
{
	std::cout << "Random sound" << std::endl;
}
