/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chorst <chorst@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 12:15:58 by chorst            #+#    #+#             */
/*   Updated: 2024/11/08 11:57:57 by chorst           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int main()
{
	std::cout << std::endl << B << "#### TEST 1 ####" << D << std::endl << std::endl;

	// const Animal* meta = new Animal();
	std::cout << "Animal calls itself without inheritation:" << std::endl;
	const Animal* random = new Animal();
	std::cout << std::endl;

	std::cout << "Dog calls itself with inheritation, so it calls Animal Constructor first: " << std::endl;
	const Animal* animal_dog = new Dog();
	std::cout << std::endl;

	std::cout << "Cat calls itself with inheritation, so it calls Animal Constructor first: " << std::endl;
	const Animal* animal_cat = new Cat();
	std::cout << std::endl;

	std::cout << "WrongAnimal calls itself without inheritation:" << std::endl;
	const WrongAnimal* wrong_animal = new WrongAnimal();
	std::cout << std::endl;

	std::cout << "WrongCat calls itself with inheritation, so it calls WrongAnimal Constructor first: " << std::endl;
	const WrongAnimal* wrong_cat = new WrongCat();
	std::cout << std::endl;

	std::cout << B << "#### TEST 2 ####" << D << std::endl << std::endl;

	std::cout << "Showing the type of each object:" << std::endl;
	std::cout << Y << "Type of random is: " << D << random->getType() << " " << std::endl;
	std::cout << Y << "Type of animal_dog is: " << D << animal_dog->getType() << " " << std::endl;
	std::cout << Y << "Type of animal_cat is: " << D << animal_cat->getType() << " " << std::endl;
	std::cout << Y << "Type of wrong_animal is: " << D << wrong_animal->getType() << " " << std::endl;
	std::cout << Y << "Type of wrong_cat is: " << D << wrong_cat->getType() << " " << std::endl;
	std::cout << std::endl;

	std::cout << B << "#### TEST 3 ####" << D << std::endl << std::endl;

	std::cout << "Showing the sound of each object:" << std::endl;
	std::cout << Y;
	std::cout << "random: ";
	std::cout << D;
	random->makeSound();
	std::cout << Y;
	std::cout << "animal_dog: ";
	std::cout << D;
	animal_dog->makeSound();
	std::cout << Y;
	std::cout << "animal_cat: ";
	std::cout << D;
	animal_cat->makeSound();
	std::cout << Y;
	std::cout << "wrong_animal: ";
	std::cout << D;
	wrong_animal->makeSound();
	std::cout << Y;
	std::cout << "wrong_cat: ";
	std::cout << D;
	wrong_cat->makeSound();
	std::cout << std::endl;

	std::cout << B << "#### TEST 4 ####" << D << std::endl << std::endl;

	std::cout << "Deleting the objects is not necessary, but it is a good practice)" << std::endl;
	std::cout << std::endl;
	std::cout << "Deleting random:" << std::endl;
	delete random;
	std::cout << std::endl;

	std::cout << "Deleting animal_dog:" << std::endl;
	delete animal_dog;
	std::cout << std::endl;

	std::cout << "Deleting animal_cat:" << std::endl;
	delete animal_cat;
	std::cout << std::endl;

	std::cout << "Deleting wrong_animal:" << std::endl;
	delete wrong_animal;
	std::cout << std::endl;

	std::cout << "Deleting wrong_cat:" << std::endl;
	delete wrong_cat;
	std::cout << std::endl;

	return 0;
}
