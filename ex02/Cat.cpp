/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chorst <chorst@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 12:23:24 by chorst            #+#    #+#             */
/*   Updated: 2024/11/11 15:28:53 by chorst           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : _brain(new Brain())
{
	_type = "Cat";
	std::cout << G << "Cat constructor called" << D << std::endl;
}

Cat::Cat(const Cat& original) : Animal(original)
{
	std::cout << "Cat copy constructor called" << std::endl;
	if (original._brain)
		_brain = new Brain(*original._brain);
	else
		_brain = new Brain();
}

Cat& Cat::operator=(const Cat& original)
{
	std::cout << "Cat assignment operator called" << std::endl;
	if (this != &original)
	{
		Animal::operator=(original);
		delete _brain;
		if (original._brain)
			_brain = new Brain(*original._brain);
		else
			_brain = new Brain();
	}
	return (*this);
}

Cat::~Cat()
{
	std::cout << R << "Cat destructor called" << D << std::endl;
	delete _brain;
}

void Cat::makeSound() const
{
	std::cout << "miaauuuu" << std::endl;
}
