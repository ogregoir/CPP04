/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ogregoir <ogregoir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/02 15:15:07 by ogregoir          #+#    #+#             */
/*   Updated: 2024/05/16 12:46:53 by ogregoir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

int main(void)
{
    int     size = 10;
    Animal  *farm[size];
    int     i = 0;
    
    while(i < (size / 2))
    {
        farm[i] = new Dog();
        i++;
    }
    while(i < size)
    {
        farm[i] = new Cat();
        i++;
    }
    std::cout << std::endl << std::endl;
    i = 0;
    while (i < size)
    {
        farm[i]->makeSound();
        i++;
    }
    std::cout << std::endl << std::endl;
    i = 0;
    while (i < size)
    {
        delete farm[i];
        i++;
    }
}
