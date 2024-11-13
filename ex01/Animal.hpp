/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chorst <chorst@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 12:21:44 by chorst            #+#    #+#             */
/*   Updated: 2024/11/08 11:16:26 by chorst           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#define D		"\033[0m"
#define R		"\033[31m"
#define G		"\033[32m"
#define Y		"\033[33m"
#define B		"\033[34m"

#include <iostream>
#include <string>

class Animal
{
	protected:
				std::string _type;
	public:
				Animal();
				Animal(const Animal& original);
				Animal& operator=(const Animal& original);
				virtual ~Animal();

				std::string	getType() const;
				virtual void	makeSound() const;

};

#endif
