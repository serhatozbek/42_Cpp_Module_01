/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sozbek <sozbek@student.kocaeli.42.tr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/04 00:00:18 by sozbek            #+#    #+#             */
/*   Updated: 2025/09/08 03:10:47 by sozbek           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

# include "Weapon.hpp"
# include <string>

class HumanA {
private:
    std::string _name;
    Weapon&     _weapon;

public:
    HumanA(std::string name, Weapon& weapon);
    ~HumanA();

    void attack();
};

#endif