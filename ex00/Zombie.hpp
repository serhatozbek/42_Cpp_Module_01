/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sozbek <sozbek@student.42kocaeli.tr>       #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-09-04 00:01:57 by sozbek            #+#    #+#             */
/*   Updated: 2025-09-04 00:01:57 by sozbek           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <string>
#include <iostream>

class Zombie
{
private:
    std::string _name;

public:
    Zombie(std::string name);
    ~Zombie(void);
    void announce(void);
};

    Zombie *newZombie(std::string name);
    void randomChump(std::string name);



#endif