/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chorst <chorst@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 12:22:54 by chorst            #+#    #+#             */
/*   Updated: 2024/11/11 14:44:42 by chorst           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal
{
	private:
				Brain* _brain;
	public:
				Dog();
				Dog(const Dog& original);
				Dog& operator=(const Dog& original);
				~Dog();

				// Methods:
				void	makeSound() const;
				void setIdeas(int index, std::string idea);
				std::string getIdeas(int index) const;
};

#endif
