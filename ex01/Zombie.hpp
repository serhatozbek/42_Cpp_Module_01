/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sozbek <sozbek@student.42kocaeli.tr>       #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-09-04 00:01:14 by sozbek            #+#    #+#             */
/*   Updated: 2025-09-04 00:01:14 by sozbek           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP
#include <string>
#include <iostream>

class Zombie{
    private:
        std::string _name;
    public:
        Zombie();
        Zombie(std::string name);
        ~Zombie(void);
        void announce(void);
        void setName(std::string name);

};

Zombie* newZombie(std::string name);
void randomCHump(std::string name);

#endif