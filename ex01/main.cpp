/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chorst <chorst@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 12:15:58 by chorst            #+#    #+#             */
/*   Updated: 2024/11/11 16:57:08 by chorst           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int main()
{
	// ############################################################
	std::cout << std::endl << B << "#### TEST 1 ####" << D << std::endl << std::endl;
	// ############################################################
	std::cout << "Creating Dog:" << std::endl;
	const Animal* j = new Dog();
	std::cout << std::endl;
	std::cout << "Creating Cat:" << std::endl;
	const Animal* i = new Cat();
	std::cout << std::endl;
	std::cout << "Deleting Dog:" << std::endl;
	delete j;
	std::cout << std::endl;
	std::cout << "Deleting Cat:" << std::endl;
	delete i;

	// ############################################################
	std::cout << std::endl << B << "#### TEST 2 ####" << D << std::endl;
	// ############################################################
	std::cout << "Array of 6 animals cause subject said so" << std::endl << std::endl;
	Animal* array[20];

	for (int i = 0; i < 6; i++)
	{
		if (i < 3)
		{
			std::cout << "Creating " << Y << "dog " << D << "object in array: [" << i << "]" ":" << std::endl;
			array[i] = new Dog();
		}
		if (i >= 3 && i < 6)
		{
			std::cout << "Creating " << Y << "cat " << D << "object in array: [" << i << "]" ":" << std::endl;
			array[i] = new Cat();
		}
	}
	std::cout << std::endl;

	// ############################################################
	std::cout << B << "#### TEST 3 ####" << D << std::endl;
	// ############################################################
	std::cout << "Deleting array of objects in reversed order from the heap" << std::endl << std::endl;
	for (int i = 5; i >= 0; i--)
	{
		if (i < 3)
			std::cout << "Deleting " << Y << "dog " << D << "object in array: [" << i << "]" ":" << std::endl;
		else if (i >= 3 && i < 6)
			std::cout << "Deleting " << Y << "cat " << D << "object in array: [" << i << "]" ":" << std::endl;
		delete array[i];
	}

	// ############################################################
	std::cout << std::endl << B << "#### TEST 4 ####" << D << std::endl;
	// ############################################################
	std::cout << "Showing what a deep copy is:" << std::endl << std::endl;
	std::cout << "Creating object dog1:" << std::endl;
	Dog *dog1 = new Dog();
	dog1->setIdeas(0, "I love walks");
	std::cout << "dog 1 idea: " << dog1->getIdeas(0) << std::endl;
	std::cout << std::endl;
	std::cout << "Creating dog2:" << std::endl;
	std::cout << "(Creating deep Copy of dog1 to dog2 with " << Y << "Dog *dog2 = new Dog(*dog1);" << D << " on the heap)" << D <<std::endl ;
	Dog *dog2 = new Dog(*dog1);
	std::cout << std::endl;
	std::cout << "Deleting dog1:" << std::endl;
	delete dog1;
	std::cout << std::endl;
	std::cout << Y << "(dog2 still exists with the same idea as dog1, cause it's a deep copy)" << D << std::endl << std::endl;
	std::cout << "dog 2 idea: " << dog2->getIdeas(0) << std::endl;
	std::cout << std::endl;
	std::cout << "Deleting dog2:" << std::endl;
	delete dog2;
	std::cout << std::endl;

	// ############################################################
	std::cout << std::endl << B << "#### END OF TESTS ####" << D << std::endl;
	// ############################################################
	return 0;
}
