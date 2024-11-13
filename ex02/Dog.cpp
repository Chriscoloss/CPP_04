/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chorst <chorst@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 12:22:45 by chorst            #+#    #+#             */
/*   Updated: 2024/11/11 15:58:06 by chorst           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : _brain(new Brain())
{
	_type = "Dog";
	std::cout << G << "Dog constructor called" << D << std::endl;
}


Dog::Dog(const Dog& original) : Animal(original)
{
	std::cout << G << "Dog copy constructor called" << D << std::endl;
	if (original._brain)
		_brain = new Brain(*original._brain);
	else
		_brain = new Brain();
}

Dog& Dog::operator=(const Dog& original)
{
	std::cout << G << "Dog assignment operator called" << D << std::endl;
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

Dog::~Dog()
{
	std::cout << R << "Dog destructor called" << D << std::endl;
	delete _brain;
}

void Dog::makeSound() const
{
	std::cout << "wuff wuff" << std::endl;
}

void Dog::setIdeas(int index, std::string idea)
{
	_brain->setIdeas(index, idea);
}

std::string Dog::getIdeas(int index) const
{
	return (_brain->getIdeas(index));
}
