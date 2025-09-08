/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sozbek <sozbek@student.kocaeli.42.tr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/04 00:00:30 by sozbek            #+#    #+#             */
/*   Updated: 2025/09/08 03:11:00 by sozbek           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

# include "Weapon.hpp"
# include <string>

class HumanB {
private:
    std::string _name;
    Weapon* _weapon;

public:
    HumanB(std::string name);
    ~HumanB();
    void setWeapon(Weapon& newWeapon);
    void attack();
};

#endif