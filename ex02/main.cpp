/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: walnaimi <walnaimi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/10 19:25:41 by walnaimi          #+#    #+#             */
/*   Updated: 2024/11/10 19:25:41 by walnaimi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int main() {
    //Write a program that contains:
    std::string brain = "HI THIS IS BRAIN";   // A string variable initialized to "HI THIS IS BRAIN"
    std::string* stringPTR = &brain;  // stringPTR: a pointer to the string.
    std::string& stringREF = brain;  // stringREF: a refrence to the string.
    //Your program has to print:
    std::cout << "Memory address of the string variable: " << &brain << std::endl;  //The memory address of the string variable
    std::cout << "Memory address held by stringPTR: " << stringPTR << std::endl; //The memory address held by stringPTR
    std::cout << "Memory address held by stringREF: " << &stringREF << std::endl; //The memory address held by stringREF.
    //And then:
    std::cout << "Value of the string variable: " << brain << std::endl;  // The value of the string variable
    std::cout << "Value pointed to by stringPTR: " << *stringPTR << std::endl; //The value pointed to by stringPTR.
    std::cout << "Value pointed to by stringREF: " << stringREF << std::endl; //The value pointed to by stringREF.
    return 0;
}
