/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chorst <chorst@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 11:28:00 by chorst            #+#    #+#             */
/*   Updated: 2024/11/08 12:00:27 by chorst           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONG_ANIMAL_HPP
#define WRONG_ANIMAL_HPP

#define D		"\033[0m"
#define R		"\033[31m"
#define G		"\033[32m"
#define Y		"\033[33m"
#define B		"\033[34m"

#include <iostream>
#include <string>

class WrongAnimal
{
	protected:
				std::string _type;
	public:
				WrongAnimal();
				WrongAnimal(const WrongAnimal& original);
				WrongAnimal& operator=(const WrongAnimal& original);
				virtual ~WrongAnimal();

				std::string	getType() const;
				void	makeSound() const;

};

#endif
