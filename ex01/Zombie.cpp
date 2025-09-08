/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sozbek <sozbek@student.42kocaeli.tr>       #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-09-04 00:01:08 by sozbek            #+#    #+#             */
/*   Updated: 2025-09-04 00:01:08 by sozbek           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(){
    std::cout << "A nameless zombie has risen!" << std::endl;
}

Zombie::Zombie(std::string name){
    this ->_name = name;
    std::cout << "A new zombie named " <<this->_name << " has been created!" << std::endl;
}
Zombie::~Zombie(void){
    
    std::cout << "Zombie " << this->_name << " has been destroyed!" << std::endl;
}

void Zombie::announce(void){
    std::cout << this->_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
void Zombie::setName(std::string name){
    this->_name = name;
}
