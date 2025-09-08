/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sozbek <sozbek@student.42kocaeli.tr>       #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-09-04 00:01:50 by sozbek            #+#    #+#             */
/*   Updated: 2025-09-04 00:01:50 by sozbek           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream>

Zombie::Zombie(std::string name){
    this ->_name = name;
    std::cout << "A new zombie named " << _name << " has been created!" << std::endl;
};

Zombie::~Zombie(void){
    
    std::cout << "Zombie " << _name << " has been destroyed!" << std::endl;
};

void Zombie::announce(void){
    std::cout << _name << ": BraiiiiiiinnnzzzZ..." << std::endl;
};