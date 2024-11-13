/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chorst <chorst@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 11:27:50 by chorst            #+#    #+#             */
/*   Updated: 2024/11/08 11:30:33 by chorst           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : _type("Bananabread")
{
	std::cout << G << "WrongAnimal constructor called" << D << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal& original)
{
	std::cout << "WrongAnimal copy constructor called" << std::endl;
	*this = original;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal& original)
{
	std::cout << "WrongAnimal assignation operator called" << std::endl;
	_type = original._type;
	return (*this);
}

WrongAnimal::~WrongAnimal()
{
	std::cout << R << "WrongAnimal destructor called" << D << std::endl;
}


std::string	WrongAnimal::getType() const
{
	return (_type);
}

void	WrongAnimal::makeSound() const
{
	std::cout << "Wrong random sound" << std::endl;
}
