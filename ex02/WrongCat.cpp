/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chorst <chorst@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 11:30:48 by chorst            #+#    #+#             */
/*   Updated: 2024/11/11 16:14:39 by chorst           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat()
{
	_type = "WrongCat";
	std::cout << G << "WrongCat constructor called" << D << std::endl;
}

WrongCat::WrongCat(const WrongCat& original) : WrongAnimal(original)
{
	std::cout << "WrongCat copy constructor called" << std::endl;
	*this = original;
}

WrongCat& WrongCat::operator=(const WrongCat& original)
{
	std::cout << "WrongCat assignation operator called" << std::endl;
	WrongAnimal::operator=(original);
	return (*this);
}

WrongCat::~WrongCat()
{
	std::cout << R << "WrongCat destructor called" << D << std::endl;
}

void WrongCat::makeSound() const
{
	std::cout << "oink oink" << std::endl;
}
