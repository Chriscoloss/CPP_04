/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chorst <chorst@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 12:23:04 by chorst            #+#    #+#             */
/*   Updated: 2024/11/08 15:03:14 by chorst           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal
{
	private:
				Brain* _brain;
	public:
				Cat();
				Cat(const Cat& original);
				Cat& operator=(const Cat& original);
				~Cat();

				void	makeSound() const;
};

#endif
