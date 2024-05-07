/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/02 15:15:07 by ogregoir          #+#    #+#             */
/*   Updated: 2024/05/04 18:59:35 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

/*
int main()
{
const Animal* meta = new Animal();
const Animal* j = new Dog();
const Animal* i = new Cat();

std::cout << j->getType() << " " << std::endl;
std::cout << i->getType() << " " << std::endl;
i->makeSound(); //will output the cat sound!
j->makeSound();
meta->makeSound();
delete(meta);
delete(j);
delete(i);
return 0;
}
*/

int main()
{
const Animal* meta = new Animal();
const Animal* j = new Dog();
const Animal* i = new Cat();
const WrongAnimal* wrong  = new WrongAnimal();
const WrongAnimal* cat = new WrongCat();

std::cout << j->getType() << " " << std::endl;
std::cout << i->getType() << " " << std::endl;
std::cout << wrong->getType() << " " << std::endl;
std::cout << cat->getType() << " " << std::endl;

i->makeSound(); //will output the cat sound!
j->makeSound();
meta->makeSound();
wrong->makeSound();
cat->makeSound();
delete(meta);
delete(j);
delete(i);
delete(wrong);
delete(cat);
return 0;
}