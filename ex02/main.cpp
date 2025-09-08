/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sozbek <sozbek@student.kocaeli.42.tr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/04 00:00:46 by sozbek            #+#    #+#             */
/*   Updated: 2025/09/08 03:08:21 by sozbek           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int main()
{
    std::string str = "HI THIS IS BRAIN";
    std::string* stringPTR = &str;
    std::string& stringREF = str;

    std::cout << "--- MEMORY ADDRESSES ---" << std::endl;
    std::cout << "Address of the string variable: " << &str << std::endl;
    std::cout << "Address held by stringPTR:     " << stringPTR << std::endl;
    std::cout << "Address held by stringREF:     " << &stringREF << std::endl;

    std::cout << std::endl;

    std::cout << "--- VALUES ---" << std::endl;
    std::cout << "Value of the string variable:  " << str << std::endl;
    std::cout << "Value pointed to by stringPTR: " << *stringPTR << std::endl;
    std::cout << "Value pointed to by stringREF: " << stringREF << std::endl;

    return (0);
}