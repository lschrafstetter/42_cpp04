/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lschrafs <lschrafs@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 15:25:45 by lschrafs          #+#    #+#             */
/*   Updated: 2022/09/30 16:13:08 by lschrafs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Brain.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

int main(void) {
  Dog *dog = new Dog();
  Cat *cat = new Cat();

  delete dog;
  delete cat;

  std::cout << std::endl
            << GREEN << "--- Array of animals ---" << std::endl
            << std::endl;

	Animal *array_animals[10];
	for (int i = 0; i < 10; i++) {
		if (i % 2)
			array_animals[i] = new Dog();
		else
			array_animals[i] = new Cat();
	}
	std::cout << std::endl << YELLOW;
	
	for (int i = 0; i < 10; i++)
		array_animals[i]->makeSound();

	std::cout << std::endl << RED;
	
	for (int i = 0; i < 10; i++)
		delete array_animals[i];

	std::cout << std::endl << BLUE << "--- Test for deep copy ---" << std::endl << std::endl;
	Cat *cat2 = new Cat();
	cat2->implant_idea("Hmm... fish!");
	cat2->implant_idea("I wanna play...");
	cat2->print_ideas();
	
	std::cout << std::endl << MAGENTA << "--- Making a deep copy ---" << std::endl << std::endl;

	Cat *cat3 = new Cat(*cat2);
	cat2->implant_idea("Gotta sleep now...");
	std::cout << std::endl;
	cat2->print_ideas();
	std::cout << std::endl;
	cat3->print_ideas();
	std::cout << std::endl;
	delete cat2;
	delete cat3;
	return 0;
}