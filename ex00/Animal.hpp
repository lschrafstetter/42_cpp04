/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lschrafs <lschrafs@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/30 10:53:09 by lschrafs          #+#    #+#             */
/*   Updated: 2022/09/30 11:04:29 by lschrafs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>
#include <string>

class Animal {
 public:
  // Constructors
  Animal();
  Animal(const Animal &copy);
  Animal(std::string type);

  // Destructor
  virtual ~Animal();

  // Operators
  Animal &operator=(Animal other);
  void swap(Animal &first, Animal &second);

  // Getters / Setters
  std::string get_type() const;
  void set_type(std::string type);

  // Functions
  virtual void makeSound() const;

 protected:
  std::string type_;
};

#endif